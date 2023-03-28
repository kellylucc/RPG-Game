
#include <iostream>
#include <unistd.h>
using namespace std;
#include "Character.h"
#include "RichGuy.h"

RichGuy::RichGuy(string _n):Character(_n) {
    name=_n;
    love_lvl=0;
    date_num=0;
    count=1;
}


//story function for rich guy that can be called by main function when player choses to spend the day with rich guy 
void RichGuy::MakeDialogue() {
    //switch statements used for day number - different scenes play depending on the day number.
    switch(count) {
        case 1:
            //story inserted here
            cout<<"DAY 1\n"<<endl;
            usleep(3000000);
            cout<<"I've just moved from Sydney to Adelaide. I don't know anyone here yet. I hope I'll make some new friends when I move into this new apartment...\n"<<endl;
            usleep(2000000);
            cout<<"I look up to the grand building, towering over me and enter through the glass doors. A man comes up and greets me. \n"<<endl;
            usleep(2000000);
            cout<<"???: Welcome, my name's Eric. Are you the new resident moving here today?\n"<<endl;

            std::cout<<"Yes, my name's "<<name<<endl;
            cout<<"1) Nice to meet you.\n2) To be honest... I don't know anyone here. If you're not busy sometime, could you show me around?\n3)Thanks for the keys. Bye.\n4) See you later loser.\n"<<endl;
            cin>>option; //get user's option choice through input
            
            //while loop after every cin statmeent as defensive programming practice, for it the user enters an unexpected number
            while (option!="1" && option!="2" && option!="3" && option!="4") {
                cout<<"Enter 1, 2, 3 or 4: "<<endl;
                cin>>option;
            }
            //if statments that output different scenes, and give/take love points based on input
            if (option=="1"){
                cout<<"Eric: Nice to meet you too! Your room is on floor 15. Here's the key to your room. If you want, I can show you around the place.\n"<<endl;
                usleep(2000000);
                cout<<name<<": Really? That would be very nice. I don't really know anyone here..."<<endl;
                usleep(2000000);
                cout<<"He walks towards a backroom of the apartment and I follow along behind him."<<endl;
                love_lvl=love_lvl+3; //positive love points (good answer)
            } else if (option=="2"){
                cout<<"Eric: Sure! I was hoping to meet some new people around here too. Let me show you to my one-million dollar Tesla gifted to me by Elon Musk himself."<<endl;
                usleep(2000000);
                cout<<name<<": Wow, really? I'm very excited to see.\n";
                usleep(2000000);
                cout<<"He gestures to follow him, and I walk along.\n";
                usleep(2000000);
                love_lvl=love_lvl+6; //great answer
            } else if (option=="3"){
                cout<<"Eric: Oh okay...Bye...You sure you don't want me to show you around or anything?"<<endl;
                usleep(2000000);
                cout<<"You: Um... Yeah, that would be nice I guess.\n";
                usleep(2000000);
                cout<<"Eric: Alright then, follow me.\n";
                usleep(2000000);
                cout<<"I guess getting a friend this way wouldn't be that bad. He walks to a backroom of the apartment, and I follow him.\n";
                usleep(2000000);
                love_lvl=love_lvl-3; //bad answer
            } else if (option=="4"){
                cout<<"Eric: Ok. Screw you too. Hmph.\n"<<endl;
                usleep(2000000);
                cout<<"Eric: Um...Since you're new here and probably don't have any friends, I guess I wouldn't mind being your friend or anything...\n";
                usleep(2000000);
                cout<<"Eric: Now that we're friends, maybe I should show you around or something...\n";
                usleep(2000000);
                cout<<name<<": Hm. Okay, I guess that is an alright idea. \n";
                love_lvl=love_lvl-6; //terrible answer
            }
            
            cout<<"Current affection points: "<<love_lvl<<endl; //display current love points
            cout<<"Eric opens the door to a backroom to reveal a fancy and posh black and white car in a garage and walks towards it."<<endl;
            usleep(2000000);
            cout<<"You: Wow, your car is... "<<endl;
            cout<<"1) Kinda ugly...\n2) So nice! this is so cool!\n3)So posh. You must be rich. Wanna date?\n4) Actually a Tesla... Interesting.\n"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3" && option!="4") {
                cout<<"Enter 1, 2, 3 or 4: "<<endl;
                cin>>option;
            }
            if (option=="1"){
                cout<<"Eric: ...Y-You're kinda ugly. N-Now get in my car. "<<endl;
                usleep(2000000);
                cout<<name<<": Yep. I'm getting in the car."<<endl;
                usleep(2000000);
                cout<<"He walks over to the drivers seat while I open the door to the passenger seat and take a seat. "<<endl;
                usleep(2000000);
                love_lvl=love_lvl-3;
            } else if (option=="2"){
                love_lvl=love_lvl+6;
                cout<<"Eric: Haha, thanks. I love my car so much. Hehe. "<<endl;
                usleep(2000000);
                cout<<"Eric walks over to the passenger seat and opens the car door and looks at me. "<<endl;
                usleep(2000000);
                cout<<"I walk over to him and get inside the car."<<endl;
                usleep(2000000);
                cout<<name<<": Thanks."<<endl;
                usleep(2000000);
                cout<<"Eric closes the car door and walks over to his side, getting into the driver's seat. "<<endl;
                usleep(2000000);
            } else if (option=="3"){
                love_lvl=love_lvl-6;
                cout<<"Eric: Ummm... "<<name<<"Are you a gold-digger?"<<endl;
                usleep(2000000);
                cout<<name<<": ...I was just joking. Chill."<<endl;
                usleep(2000000);
                cout<<"Eric: Yeah. Joking. Sure."<<endl;
                usleep(2000000);
                cout<<"He walks over to the drivers seat while I open the door to the passenger seat and take a seat. "<<endl;
                usleep(2000000);
            } else if (option=="4"){
                love_lvl=love_lvl+3;
                cout<<"Eric: Yes, I love my car hehe. "<<endl;
                usleep(2000000);
                cout<<"Eric walks over to the passenger seat and opens the car door and looks at me. "<<endl;
                usleep(2000000);
                cout<<"I walk over to him and get inside the car."<<endl;
                usleep(2000000);
                cout<<name<<": Thanks."<<endl;
                usleep(2000000);
                cout<<"Eric closes the car door and walks over to his side, getting into the driver's seat. "<<endl;
                usleep(2000000);
            }
            
            cout<<"Eric drove me around town, and I learnt about lots of new things."<<endl;
            cout<<"What a fun day! Let's go to bed now. "<<endl;
            
            count++; //add 1 to the day count after every day
            break;

        case 2:
            cout<<"===DAY 2==="<<endl;
            cout<<"It is a sunny day today"<<endl;
            cout<<"This time, I set my alarm and woke up early to make breakfast"<<endl;
            usleep(2000000);
            cout<<"You: Oh, it looks like I still have some left over."<<endl;
            usleep(2000000);
            cout<<"You: What should I do with this left over food?\n"<<endl;
            cout<<"1) Give the left over food to Eric\n2) Throw the food away in front of Eric\n3) Save the rest of the food for later today\n";
            cin>>option;
            
            while (option!="1" && option!="2") {
                cout<<"Enter 1 or 2: "<<endl;
                cin>>option;
            }
            if (option=="1"){
                love_lvl=love_lvl+4;
                cout<<"You pack away the left over breakfast nicely in a container."<<endl;
                usleep(2000000);
                cout<<"You take the elevator down to the first floor, where Eric is at the front desk, as usual, and give him the food."<<endl;
                usleep(2000000);
                cout<<"Eric: I-Is thisf for me? Thanks, "<<name<<" I was so hungry!"<<endl;
                usleep(2000000);
                cout<<"Eric and I spend the whole day talking in the lobby of the apartment"<<endl;
            }
            if (option=="2") {
                cout<<"You: Hmm since I still have a lot of food left over I may as well save it for later today."<<endl;
                usleep(2000000);
                cout<<"You: Lets go back to sleep."<<endl;
            }
            
            cout<<"What a fun day! Time to go to bed."<<endl;
            usleep(2000000);
            cout<<"Current affection points: "<<love_lvl<<endl; //display current love points
            usleep(2000000);

            count+=1;
            break;

        case 3:
            cout<<"===DAY 3===\n";
            cout<<"It is another early morning"<<endl;
            usleep(2000000);
            cout<<"What do you want to do with your day?"<<endl;
            usleep(2000000);
            cout<<"1) Stay at home and do nothing\n2) Stay at home and prepare a romantic dinner for you and Bob\n"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2") {
                cout<<"Enter a 1 or 2: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<"You stay at home watching YouTube and playing Tetris. Wow what a fun day."<<endl;
                usleep(2000000);
                cout<<"You go to sleep"<<endl;
                usleep(2000000);
            } else if (option=="2") {
                love_lvl=love_lvl+3;
                cout<<"You: I'm gonna make Bob fall in loven with me! I'll make him dinner for tonight."<<endl;
                usleep(2000000);
                cout<<"What should I prepare?"<<endl;
                cout<<"1)Mash potato and steak\n2)Spaghetti bolognese\n3)Fried rice"<<endl;
                cin>>option;
                    
                while (option!="1" && option!="2" && option!="3") {
                    cout<<"Enter a 1, 2 or 3: "<<endl;
                    cin>>option;
                }
                    
                cout<<"You: What a great idea! I'll get to work right now"<<endl;
                usleep(2000000);
                cout<<"You spend the day cooking for Eric."<<endl;
                usleep(2000000);
                cout<<"6 hours later... "<<endl;
                usleep(2000000);
                cout<<"You: Finally done! I'm going to tell Eric now!"<<endl;
                usleep(2000000);
                cout<<"Eric rings the doorbell, and I hopen the door and let him in"<<endl;
                usleep(2000000);

                if (option=="1"){
                    love_lvl=love_lvl+5;
                    cout<<"Eric: Mmmm! What's that? Smells great!"<<endl;
                    usleep(2000000);
                    cout<<"Eric ate everything. He seems to have loved the meal!"<<endl;
                    usleep(2000000);
                } else if (option=="2"){
                    love_lvl=love_lvl+2;
                    cout<<"Eric: Smells great, can't want to try this!"<<endl;
                    usleep(2000000);
                    cout<<"Eric ate most of his meal. He must have liked it!"<<endl;
                    usleep(2000000);
                } else if (option=="3"){
                    love_lvl=love_lvl-3;
                    cout<<"Eric: Urgh... What's that smell...?"<<endl;
                    usleep(2000000);
                    cout<<"Eric hardly ate anything... He must've not liked it..."<<endl;
                    usleep(2000000);
                }

                cout<<"You: What a nice day! Time to go to bed!"<<endl;
                usleep(2000000);

                cout<<"Current affection points: "<<love_lvl<<endl; //display current love points
                usleep(2000000);
            }
               
            count+=1;
            break;       
                       
        case 4:
            cout<<"===DAY 4==="<<endl;
            usleep(2000000);
            cout<<"I wake up in the morning, and today. And look... my fringe is empty... it's time to go grocery shopping!"<<endl;
            usleep(2000000);
            cout<<"I go to the store. Oh look, Eric is grocery shopping too."<<endl;
            usleep(2000000);
            cout<<"He looks like he's having trouble... What should I do?"<<endl;
            usleep(2000000);
            cout<<"1) Help him\n2) Ask if he needs help\n3) Ignore him";
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1"){
                love_lvl=love_lvl+5;
                cout<<"Eric: Oh, "<<name<<", you're here. You're helping me? Thank you! I was having trouble since I don't go grocery shopping that often..."<<endl;
                usleep(2000000);
                cout<<"You spent the rest of the day with Eric. Time to go to bed."<<endl;
                usleep(2000000);
            } else if (option=="2"){
                love_lvl=love_lvl+2;
                cout<<"Eric: Oh, "<<name<<" it's you. Umm... N-no, why would I need help... Maybe I do need some help..."<<endl;
                usleep(2000000);
                cout<<"You spent the rest of the day with Eric. Time to go to bed."<<endl;
                usleep(2000000);
            } else if (option=="3"){
                love_lvl=love_lvl-3;
                cout<<"You walk past Eric without saying anything, and he gives you a strange stare. I wonder what he was thinking... "<<endl;
                usleep(2000000);
                cout<<"You spend the rest of the day alone. Time to go to bed."<<endl;
                usleep(2000000);
            }
            
            cout<<"Current affection points: "<<love_lvl<<endl; //display current love points
            usleep(2000000);

            count+=1; //add 1 to day count
            break;
      
        case 5:
            
            cout<<"===DAY 5==="<<endl;
            usleep(2000000);
            cout<<"I send Eric a good morning text."<<endl;
            usleep(2000000);
            cout<<"He sends one back and tells me that he's feeling a bit under the weather. What should I do?"<<endl;
            usleep(2000000);
            cout<<"1)Send him a 'get well soon' message\n2)Call him and ask how he is\n3)Visit him with food and drinks to help him get better.\n4)Say nothing."<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3" && option!="4") {
                cout<<"Enter a 1, 2, 3 or 4: "<<endl;
                cin>>option;
            }
            if (option=="1"){
                love_lvl=love_lvl+1;
                cout<<"I'll just send him a get well message. Don't want to bother him when he's sick. "<<endl;
                usleep(2000000);
            } else if (option=="2"){
                love_lvl=love_lvl-3;
                cout<<"Maybe I should call him to ask how he is..."<<endl;
                usleep(2000000);
                cout<<"I call him and he picks up. He sounded too tired to talk back to me though."<<endl;
                usleep(2000000);
            } else if (option=="3"){
                love_lvl=love_lvl+5;
                cout<<"I bring some gatorade, medicines and ingredients to make delicious congee."<<endl;
                usleep(2000000);
                cout<<"When I get to his mansion, he opens the door, and I look after him for the day. What a nice day!"<<endl;
                usleep(2000000);
            } else if (option=="4"){
                love_lvl=love_lvl-5;
                cout<<"I shall let him rest. He seems too tired to be able to respond."<<endl;
                usleep(2000000);
                cout<<"You spent the day doing chores and studying. "<<endl;
                usleep(2000000);
            }
                
            cout<<"Current affection points: "<<love_lvl<<endl; //display current love points

            count+=1; //add 1 to day count
            break;
            
        case 6:
            cout<<"===DAY 6==="<<endl;
            usleep(2000000);
            cout<<"Wow, it's such a rainy day today. ";
            usleep(2000000);
            cout<<"You: What should I do with my day?\n"<<endl;
            usleep(2000000);
            cout<<"1) Go see what Eric is going\n2) Ask Eric to help you with maths\n 3) Go to Eric's house and take his keys"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                love_lvl=love_lvl+3;
                cout<<"You: I want to see what Eric's doing today"<<endl;
                usleep(2000000);
                cout<<"You: Lets pay him a visit!"<<endl;
                usleep(2000000);
                cout<<"-You knock on Eric's door-"<<endl;
                usleep(2000000);
                cout<<"You: Hey Eric! What are you doing right now?"<<endl;
                usleep(2000000);
                cout<<"Eric: Hey "<<name<<", I was just watching Star Wars. Wanna join?"<<endl;
                usleep(2000000);
                cout<<"You: Hell yeah! I love Star Wars!!"<<endl;
            } else if (option=="2") {
                love_lvl=love_lvl+5;
                cout<<"You: Exams are coming up... maybe I should do some studying. But this maths is so hard..."<<endl;
                usleep(2000000);
                cout<<"You: Let me ask Eric if he could help me study for this..."<<endl;
                usleep(2000000);
                cout<<"-You knock on Eric's door-"<<endl;
                usleep(2000000);
                cout<<"Eric: Hey, "<<name<<", what are you up to today?"<<endl;
                usleep(2000000);
                cout<<"You: I was wondering if you could help me study for this maths exam... I'm finding it a bit difficult."<<endl;
                usleep(2000000);
                cout<<"Eric: Oh yeah! It's about time for exams. You're lucky that maths is my strong point!"<<endl;
                usleep(2000000);
                cout<<"Hit me with the question!"<<endl;
                usleep(2000000);
            } else if (option=="3") {
                love_lvl=love_lvl-10;
                cout<<"You: I'm bored..."<<endl;
                usleep(2000000);
                cout<<"You: Lets go to Eric's mansion and take his keys, I'm sure he wouldn't mind"<<endl;
                usleep(2000000);
                cout<<"You sneak into his house and take his keys but accidently get caught after trying to leave his house with the keys"<<endl;
                usleep(2000000);
                cout<<"Eric: "<<name<<"! What are you doing??? Get back here!!"<<endl;
                usleep(2000000);
                cout<<"You: Welp time to run"<<endl;
            }
            
            cout<<"Current affection points: "<<love_lvl<<endl; //display current love points

            count+=1;
            break;
            
        case 7:
            
            cout<<"===DAY 7===\n";
            cout<<"Today, I spent the day talking to Eric. I got to learn lots more about him. "<<endl;
            love_lvl=love_lvl+5;
           
            count+=1;
            break;
        default:
            cout<<"Error\n";
    }
}

//date function
void RichGuy::Date() {
    cout<<"Where do you want Eric to take you? "<<endl;
    cout<<"1) The beach\n2) An amusement park\n3) A fancy resturaunt";
    cin>>option;
    
    while (option!="1" && option!="2" && option!="3") {
        cout<<"Enter 1, 2, or 3: ";
        cin>>option;
    }
    if (option=="3") {
        date_num+=1;
    }
}