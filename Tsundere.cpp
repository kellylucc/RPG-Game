#include <iostream>
#include <unistd.h>
using namespace std;
#include "Character.h"
#include "Tsundere.h"


Tsundere::Tsundere(string _n):Character(_n) {
    name=_n; //get name of player through main file 
    love_lvl=0; //set love level of tsundere to 0
    date_num=0; //set date number to 0
    count=1; //set day number to 1
}

//stroy function for tsundere which can be called by the main file when date with tsundere is chosen
void Tsundere::MakeDialogue() {
    switch(count) {
        case 1:
            cout<<"===DAY 1===\n"<<endl;
            cout<<"I've just moved from Sydney to Adelaide. I don't know anyone here yet. I hope I'll make some new friends when I move into this new apartment...\n"<<endl;
            usleep(2000000);
            cout<<"I look up to the grand building, towering over me and enter through the glass doors. A man comes up and greets me. \n"<<endl;
            usleep(2000000);
                        
            cout<<"…..*..lovelovelo…*"<<endl;
            cout<<"…*..lovelovelove….*"<<endl;
            cout<<"..*.lovelovelovelove…*…………….*….*"<<endl;
            cout<<".*..lovelovelovelovelo…*………*..lovel….*"<<endl;
            cout<<"...*..lovelovelovelovelove…*….*…lovelovelo.*"<<endl;
            cout<<"*.. lovelovelovelovelove…*….*…lovelovelo.*"<<endl;
            cout<<".*..lovelovelovelovelove…*..*…lovelovelo…*"<<endl;
            cout<<"..*…lovelovelovelovelove..*…lovelovelo…*"<<endl;
            cout<<"…*….lovelovelolovelovelovelovelovelo…*"<<endl;
            cout<<"…..*….lovelovelovelovelovelovelov…*"<<endl;
            cout<<"……..*….lovelovelovelovelovelo…*"<<endl;
            cout<<"………..*….lovelovelovelove…*"<<endl;
            cout<<"……………*…lovelovelo….*"<<endl;
            cout<<"………………*..lovelo…*"<<endl;
            cout<<"…………………*…..*"<<endl;
            cout<<"………………….*..*\n"<<endl;
                        
                        
            cout<<"As you make your way towards the elevator leading up to your floor, the elevator opens and a young man with red hair strides out with an arm full of books.\n"<<endl;
            usleep(2000000);
            cout<<"But oh no, you were caught off guard by this, and you two bump into each other!\n"<<endl;
            usleep(2000000);
            cout<<"The recoil causes him to drop his books, and one by one, they fall to the ground\n"<<endl;
            usleep(2000000);
            cout<<"???: Look where you're going!"<<endl;
            usleep(2000000);
            cout<<name<<": Sorry..."<<endl;
            usleep(2000000);
            cout<<name<<": Umm... I just moved here... my name is "<<name<<endl;
            usleep(2000000);
            cout<<name<<": What's your name?"<<endl;
            usleep(2000000);
            cout<<"???: Be careful next time..."<<endl;
            usleep(2000000);
            cout<<"Bob: My name is Bob by the way."<<endl;
            usleep(2000000);
            cout<<name<<"..."<<endl;
            usleep(2000000);
            cout<<"Bob: Are you done? I'm leaving."<<endl;
            usleep(2000000);
            cout<<name<<": Oh, are you busy?"<<endl;
            usleep(2000000);
            cout<<"Bob: Ye. I'm busy trying to get away from you."<<endl;
            usleep(2000000);
            cout<<name<<": Oh..."<<endl;
            usleep(2000000);
            cout<<"..."<<endl;
            usleep(2000000);
                        
            cout<<"1) Anywaysss do you want to show me around?\n2) You're a jerk, I’m leaving\n3) Well I’m busy trying to get towards you"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            usleep(2000000);
            cout<<"..."<<endl;
            usleep(2000000);

            //Add affection points
            if (option=="1") {
                cout<<name<<": Anywaysss do you want to show me around?"<<endl;
                usleep(2000000);
                cout<<"Bob: F-Fine but it better be quick"<<endl;
                love_lvl=love_lvl+1;
            } else if (option=="2") {
                cout<<name<<": You're a jerk, I’m leaving"<<endl;
                usleep(2000000);
                cout<<"Bob: Ok.. fine I will show you around for a bit"<<endl;
                love_lvl=love_lvl-5;
            } else if (option=="3") {
                cout<<name<<"Well I’m busy trying to get towards you"<<endl;
                usleep(2000000);
                cout<<"*Bob turns around and blushes*"<<endl;
                usleep(2000000);
                cout<<"Bob: A-are you an idiot??"<<endl;
                usleep(2000000);
                cout<<"Follow me, I hope you can keep up."<<endl;
                love_lvl=love_lvl+3;
            }
            
            cout<<"..."<<endl;
            usleep(2000000);
            cout<<"*Bob showed me around town as we walk together in scilence*"<<endl;
            usleep(2000000);
            cout<<"*This is getting awkward...*"<<endl;
            usleep(2000000);
            cout<<"*I try to break the silence*\n"<<endl;
            usleep(2000000);
                        
            cout<<"1) So... do you like cheese?\n2) How much does a polar bear weigh?\n3) What are you doing after this?"<<endl;
            cin>>option;
                        
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": So... do you like cheese?"<<endl;
                cout<<"Bob: Ye... It's not bad."<<endl;
                usleep(2000000);
                cout<<"Bob: Why??"<<endl;
                love_lvl=love_lvl-5;
            } else if (option=="2") {
                cout<<name<<": How much does a polar bear weigh?"<<endl;
                cout<<"Bob: ..."<<endl;
                usleep(2000000);
                cout<<name<<": Enough to break the ice hahaha"<<endl;
                usleep(2000000);
                cout<<"Hi!"<<endl;
                love_lvl=love_lvl-3;
            } else if (option=="3") {
                cout<<name<<": What are you doing after this?"<<endl;
                cout<<"Bob: Why do you care?"<<endl;
                love_lvl=love_lvl+3;
            }
                           
            cout<<"*We continue to walk in silence until we reach a university*"<<endl;
            usleep(2000000);
            cout<<name<<": Hey! That's where I will be starting school tomorrow."<<endl;
            usleep(2000000);
            cout<<name<<": I hope I will make some new friends..."<<endl;
            usleep(2000000);
            cout<<"Bob: That's where I go as well..."<<endl;
            usleep(2000000);
            cout<<name<<": Really?? I guess I will see you around."<<endl;
            usleep(2000000);
            cout<<name<<": I'm studying finance, first year by the way"<<endl;
            usleep(2000000);
            cout<<"Bob: Ye..."<<endl;
            usleep(2000000);
            cout<<"Bob: Lets head home now."<<endl;
            usleep(2000000);      
            cout<<"\n-Back home-"<<endl;
            usleep(2000000);
            cout<<name<<": Hmm What should I do now?"<<endl;
            usleep(2000000);
            cout<<"..."<<endl;
            usleep(2000000);
                        
            cout<<"1) Go to sleep \n2) Tidy up the bedroom \n3) Play video games"<<endl;
            usleep(2000000);
            cin>>option;
                        
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }       
            if (option=="1") {
                cout<<"Good night"<<endl;
            } else if (option=="2") {
                cout<<"Hmm lets do a bit of cleaning before heading to sleep"<<endl;
            } else if (option=="3") {
                cout<<"I guess one game of tetris won't hurt..."<<endl;
            }
                        
            usleep(2000000);
            cout<<"\n ~End Day~\n"<<endl;
            usleep(2000000);
            count++;
            break;
            
        case 2:

            cout<<"===DAY 2===\n"<<endl;
            cout<<"The alarm is ringing repeatedly"<<endl;
            usleep(2000000);
            cout<<name<<": Urgh what time is it..."<<endl;
            usleep(2000000);
            cout<<name<<": I guess 5 more minutes won't hurt..."<<endl;
            usleep(2000000);
            cout<<"-15 minutes later-"<<endl;
            usleep(2000000);
            cout<<name<<": Oh no! I'm late... what do I do..."<<endl;
            usleep(2000000);
            cout<<name<<": I quickly get dressed and run outside of my appartment with my backpack on my back"<<endl;
            usleep(2000000);
            cout<<"In the corner of my eye, I see Bob standing outside of the building"<<endl;
            usleep(2000000);
            cout<<"Bob: Hey! You're late!"<<endl;
            usleep(2000000);
            cout<<name<<": You waited for me?"<<endl;
            usleep(2000000);
            cout<<"Bob: W-what?? Why would you think that?"<<endl;
            usleep(2000000);
            cout<<"Bob: I thought you would get lost on your first day..."<<endl;
            usleep(2000000);
            cout<<"Bob: This is the first and only time I'm waiting for you"<<endl;
            usleep(2000000);
            cout<<name<<": Thanks..."<<endl;
            usleep(2000000);
            cout<<name<<": Lets run! We're going to be late\n"<<endl;
            usleep(2000000);
            cout<<"We arrive 1 minute before class starts\n"<<endl;
            usleep(2000000);
            cout<<name<<": I've got to get to class now, see you around"<<endl;
            usleep(2000000);
            cout<<"Bob: Ye"<<endl;
            usleep(2000000);
            cout<<"-In class-"<<endl;
            usleep(2000000);
            cout<<"You see Bob sitting down in one of your classes"<<endl;
            usleep(2000000);
            
            cout<<"\nWhat are you going to do?\n"<<endl;
            usleep(2000000);
            cout<<"1) Go up and talk to Bob \n2) Ignore him and find another seat far away him \n3) Stare at him until he notices you"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<"You go up to Bob to talk to him"<<endl;
                usleep(2000000);
                cout<<name<<": Hey, I didn't know you would be in this class as well."<<endl;
                usleep(2000000);
                cout<<name<<": Are you also studying finance?"<<endl;
                usleep(2000000);
                cout<<"Bob: Ye."<<endl;
                usleep(2000000);
                cout<<name<<": Why didn't you tell me?"<<endl;
                usleep(2000000);
                cout<<"Bob: Well... I didn't think we would be in the same class."<<endl;
                usleep(2000000);
                cout<<name<<": Ahh I see..."<<endl;
                usleep(2000000);
                cout<<"You: Class is start soon..."<<endl;
                usleep(2000000);
                cout<<name<<": Yeh. What are you doing?"<<endl;
                usleep(2000000);
                cout<<"You: What do you mean?"<<endl;
                usleep(2000000);
                cout<<name<<": Aren't you going to sit down?"<<endl;
                usleep(2000000);
                cout<<"Bob looks down to a seat next to him"<<endl;
                usleep(2000000);
                cout<<name<<": Thanks"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+3;
            } else if (option=="2") {
                cout<<"You see Bob and find another seat far away from him"<<endl;
                usleep(2000000);
                love_lvl=love_lvl-5;
            } else if (option=="3") {
                cout<<"You stare at Bob until he notices you"<<endl;
                usleep(2000000);
                cout<<"Bob: Why are you so creepy?"<<endl;
                usleep(2000000);
                love_lvl=love_lvl-3;
            }
                
            cout<<"*Class starts*"<<endl;
            usleep(2000000);
            cout<<"Teacher: Ok lets start class"<<endl;
            usleep(2000000);
            cout<<"zZzZzZ"<<endl;
            usleep(2000000);
            cout<<"*End of Class*"<<endl;
            usleep(2000000);
            cout<<name<<"Well... class was very interesting"<<endl;
            usleep(2000000);
            cout<<"Bob: Don't lie... I saw you sleeping in class"<<endl;
            usleep(2000000);
            cout<<name<<": Hahaha opps"<<endl;
            usleep(2000000);
            cout<<name<<": Maybe I zoned out a tiny bit"<<endl;
            usleep(2000000);
            cout<<"Bob: A little??"<<endl;
            usleep(2000000);
            cout<<name<<": ..."<<endl;
            usleep(2000000);

            cout<<"Bob: Anyways... Why did you choose do study finance?"<<endl;
            cout<<"1) I didn't know what else to choose... \n2) I thought it would be nice to manage my own money and to potentially start up a business \n3) I wanted to make my parents proud"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<"I didn't know what else to choose..."<<endl;
                usleep(2000000);
                cout<<"Bob: ... Well, I guess you've got to start somewhere"<<endl;
                usleep(2000000);
                cout<<name<<": Yeah, It doesn't seem bad so far"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+0;
            } else if (option=="2") {
                cout<<"I thought it would be nice to manage my own money and to potentially start up a business"<<endl;
                usleep(2000000);
                cout<<"Bob: Oh wow. I admire how much thought you've put into your future"<<endl;
                usleep(2000000);
                cout<<name<<": Thank you!"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+2;
            } else if (option=="3") {
                cout<<"I wanted to make my parents proud"<<endl;
                usleep(2000000);
                cout<<"Bob: You should do something that makes you happy"<<endl;
                usleep(2000000);
                cout<<name<<": Yeah, that is true..."<<endl;
                usleep(2000000);
                love_lvl=love_lvl-5;
            }
                
            cout<<name<<": What about you?"<<endl;
            usleep(2000000);
            cout<<"Bob: Finance seems fascinating. I feel like it's a good career since money is used everywhere"<<endl;
            usleep(2000000);
            cout<<name<<": That is true"<<endl;
            usleep(2000000);
            cout<<"You attend a few more classes with Bob and classes are finally over"<<endl;
            usleep(2000000);
            cout<<name<<": It's time to go home...\n"<<endl;
            usleep(2000000);

            cout<<"1) Want to go home together?\n2) Well, I'm going to go home now see you later\n3) Do you want to grab something to eat on the way home?"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": Want to go home together?"<<endl;
                usleep(2000000);
                cout<<"Bob: I guess... may as well"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+1;
            } else if (option=="2") {
                cout<<name<<": Well, I'm going to go home now see you later"<<endl;
                usleep(2000000);
                cout<<"Bob: Bye"<<endl;
                usleep(2000000);
                love_lvl=love_lvl-2;
            } else if (option=="3") {
                cout<<name<<": Do you want to grab something to eat on the way home?"<<endl;
                usleep(2000000);
                cout<<"Bob: Yeah sure if we must"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+3;
            }
                
            cout<<"\n-Back at home-"<<endl;
            usleep(2000000);
            cout<<name<<": School was fun"<<endl;
            usleep(2000000);
            cout<<name<<": I'm glad I became friends with Bob... I hope I get to see him again tomorrow"<<endl;
            usleep(2000000);
            cout<<name<<": Hmm what should I do now?\n"<<endl;
            usleep(2000000);

            cout<<"1) Study\n2) Go to the gym\n 3) Play video games"<<endl;
            cin>>option;
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": Lets do some studying"<<endl;
                usleep(2000000);
                cout<<name<<": Hmm... I don't get this at all"<<endl;
                usleep(2000000);
                cout<<name<<": Lets go to bed instead..."<<endl;
                usleep(2000000);
                cout<<name<<": Future me can worry about solving this problem"<<endl;
                usleep(2000000);
            } else if (option=="2") {
                cout<<name<<": I think it's time to go to the gym!"<<endl;
                usleep(2000000);
                cout<<name<<": Oh wait... I walked enough today"<<endl;
                usleep(2000000);
                cout<<name<<": I'll count that as cardio"<<endl;
                usleep(2000000);
                cout<<name<<": I think I might eat some maccas instead"<<endl;
                usleep(2000000);
            } else if (option=="3") {
                cout<<name<<": It's time to grind in tetris!"<<endl;
                usleep(2000000);
                cout<<name<<": I will get my masters in tetris today!!"<<endl;
            }

            count++;
            break;
            
        case 3:
            cout<<"===DAY 3===\n"<<endl;
            usleep(2000000);
            cout<<"It is a sunny day today"<<endl;
            usleep(2000000);
            cout<<"This time, I set my alarm and woke up early to make breakfast"<<endl;
            usleep(2000000);
            cout<<name<<": Oh, it looks like I still have some left over"<<endl;
            usleep(2000000);
            cout<<name<<": What should I do with this left over food?\n"<<endl;
            usleep(2000000);
            cout<<"1) Give the left over food to Bob\n2) Throw the food away in front of Bob\n3) Save the rest of the food for later today\n"<<endl;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            
            if (option=="1") {
                cout<<name<<": Lets give the left over food to Bob"<<endl;
                usleep(2000000);
                cout<<"You walk over to Bob's house and knock on his door"<<endl;
                usleep(2000000);
                cout<<name<<": Hi, Bob... are you home?"<<endl;
                usleep(2000000);
                cout<<"Bob: Fancy seeing you so early this morning"<<endl;
                usleep(2000000);
                cout<<name<<": Ye, good morning!"<<endl;
                usleep(2000000);
                cout<<name<<": I made a little too much for breakfast, I was wondering if you wanted any"<<endl;
                usleep(2000000);
                cout<<"Bob: Well... I guess I will take it if you insist"<<endl;
                usleep(2000000);
                cout<<"Bob: Thanks"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+2;
            } else if (option=="2") {
                cout<<name<<": Well I'm bored"<<endl;
                usleep(2000000);
                cout<<name<<": Lets throw the food away in front of Bob"<<endl;
                usleep(2000000);
                cout<<"You look around and try to look for Bob"<<endl;
                usleep(2000000);
                cout<<"You finally find him and decide to make eye contact with him, throwing the breakfast you made into a rubbish bin"<<endl;
                usleep(2000000);
                cout<<"Bob: What are you doing??"<<endl;
                usleep(2000000);
                cout<<"Bob: You're wasting perfectly good food..."<<endl;
                usleep(2000000);
                love_lvl=love_lvl-2;
            } else if (option=="3") {
                cout<<name<<": Hmm since I still have a lot of food left over I may as well save it for later today"<<endl;
                usleep(2000000);
                cout<<name<<": Lets go back to sleep"<<endl;
                usleep(2000000);
            }

            count++;
            break;
            
        case 4:
            cout<<"===DAY 4===\n"<<endl;
            usleep(2000000);
            cout<<"It is another early morning"<<endl;
            usleep(2000000);
            cout<<"What do you want to do with your day?"<<endl;
            cout<<"1) Stay at home and do nothing\n2) Stay at home and prepare a romantic dinner for you and Bob\n3) Go to Bob's house and study with him\n"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": stay at home watching YouTube and playing Tetris. Wow what a fun day."<<endl;
                cout<<"You go to sleep"<<endl;
                love_lvl=love_lvl-2;
            } else if (option=="2") {
                cout<<name<<": I'm gonna make Bob fall in love with me! I'll make him dinner for tonight."<<endl;
                usleep(2000000);
                cout<<"What should I prepare?"<<endl;
                cout<<"1)Mash potato and steak\n2)Spaghetti bolognese\n3)Fried rice"<<endl;
                cin>>option;
                cout<<"What a great idea! I'll get to work right now"<<endl;
                love_lvl=love_lvl+2;
                usleep(2000000);
            } else if (option=="3") {
                cout<<name<<": Lets go over to Bob's house to study"<<endl;
                usleep(2000000);
                cout<<name<<": I'm sure we will get a lot done"<<endl;
                love_lvl=love_lvl+1;
            }

            count++;
            break;
            
        case 5:
            cout<<"==Day 5==\n"<<endl;
            cout<<name<<": Hmm... it's raining today"<<endl;
            usleep(2000000);

            cout<<name<<": What should I do with my day?\n"<<endl;
            cout<<"1) Go see what Bob is going\n2) Suggest to study with Bob\n3) Go to Bob's house and take his keys"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": I want to see what Bob's doing today"<<endl;
                usleep(2000000);
                cout<<name<<": Lets pay him a visit!"<<endl;
                usleep(2000000);
                cout<<"-You knock on Bob's door-"<<endl;
                usleep(2000000);
                cout<<name<<": Hey Bob! What are you doing right now?"<<endl;
                usleep(2000000);
                cout<<"Bob: W-w-what are you doing here??"<<endl;
                usleep(2000000);
                cout<<name<<": I just wanted to know what you're doing"<<endl;
                usleep(2000000);
                cout<<"Bob: Well, I'm watching Naruto right now. Care to join?"<<endl;
                usleep(2000000);
                cout<<name<<": Hell yeah! I love Naruto!!"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+2;
            } else if (option=="2") {
                cout<<name<<": Exams are coming up... maybe I should do some studying"<<endl;
                usleep(2000000);
                cout<<name<<": Let me ask Bob if he wants to join"<<endl;
                usleep(2000000);
                cout<<"-You knock on Bob's door-"<<endl;
                usleep(2000000);
                cout<<"Bob: W-w-what are you doing here??"<<endl;
                usleep(2000000);
                cout<<name<<": I was wondering if you wanted to study together"<<endl;
                usleep(2000000);
                cout<<"Bob: I guess... didn't realise exams were so soon"<<endl;
                love_lvl=love_lvl+1;
            } else if (option=="3") {
                cout<<name<<": I'm bored..."<<endl;
                usleep(2000000);
                cout<<name<<": Lets go to Bob's house and take his keys, I'm sure he wouldn't mind"<<endl;
                usleep(2000000);
                cout<<"You sneak into his house and take his keys but accidently get caught after trying to leave his house with the keys"<<endl;
                usleep(2000000);
                cout<<"Bob: What are you doing??? Get back here!!"<<endl;
                usleep(2000000);
                cout<<name<<": Welp time to run"<<endl;
                love_lvl=love_lvl-2;
            }

            count++;
            break;
            
        case 6:
            cout<<"==DAY 6==\n"<<endl;
            cout<<"I send Bob a good morning text."<<endl;
            usleep(2000000);

            cout<<"He sends one back and tells me that he's feeling a bit under the weather. What should I do?"<<endl;
            cout<<"1)Send him a 'get well soon' message\n2)Call him and ask how he is\n3)Visit him with food and drinks to help him get better."<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }

            if (option=="1"){
                cout<<"I'll just send him a get well message. Don't want to bother him when he's sick. "<<endl;
                usleep(2000000);
                love_lvl=love_lvl+0;
            } else if (option=="2"){
                love_lvl=love_lvl-3;
                cout<<"I see his text and go back to sleep..."<<endl;
                usleep(2000000);
            } else if (option=="3"){
                love_lvl=love_lvl+2;
                cout<<"He is not answering my phone call..."<<endl;
                usleep(2000000);
                cout<<"When I get to his house, he opens the door and faints in my arms"<<endl;
                usleep(2000000);
                cout<<name<<": This is an unexpected side of Bob..."<<endl;
                usleep(2000000);
                cout<<name<<": Lets carry him back to his bed first"<<endl;
                usleep(2000000);
                cout<<"I make congee and try to nurse him back to shape, sleeping on his bed in the process"<<endl;
                usleep(2000000);
            }

            count++;
            break;
            
        case 7:
            cout<<"==DAY 7=="<<endl;
            usleep(2000000);

            cout<<"Hmmm which of these activities sound interesting?\n";
            cout<<"1) Play tetris (gotta grind!!)\n2) Ask to hang out with Bob\n3) Say good morning to Bob and continue with my day\n"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter a 1, 2 or 3: "<<endl;
                cin>>option;
            }
            if (option=="1"){
                cout<<name<<": Lets play some tetris!"<<endl;
                usleep(2000000);
                cout<<name<<": Got to grind and get my masters in tetris!!"<<endl;
                love_lvl=love_lvl-1;
            } else if (option=="2"){
                love_lvl=love_lvl+3;
                cout<<"Lets see what Bob is doing"<<endl;
                usleep(2000000);
                cout<<"You walk over to Bob's place and see him playing soccer with kids in the garden"<<endl;
                usleep(2000000);
                cout<<"Bob: Hey!"<<endl;
                usleep(2000000);
                cout<<name<<"Oh, I Bob Hi"<<endl;
                usleep(2000000);
                cout<<name<<"You seem awfully popular"<<endl;
                usleep(2000000);
                cout<<"Bob: Hahaha it would seem so... care to join?"<<endl;
                usleep(2000000);
                cout<<name<<"Of course! I'll have you know I'm very good at soccer!"<<endl;
                usleep(2000000);
                cout<<"You both spend the rest of the evening playing soccer"<<endl;
                usleep(2000000);
                cout<<name<<"This is quite fun!"<<endl;
            } else if (option=="3"){
                love_lvl=love_lvl+5;
                cout<<name<<"Lets go say hi to Bob!"<<endl;
                usleep(2000000);
                cout<<"You walk over to Bob's place and see him playing with kids in the garden"<<endl;
                usleep(2000000);
                cout<<"Bob: Hey!"<<endl;
                usleep(2000000);
                cout<<name<<": Oh, I Bob Hi"<<endl;
                usleep(2000000);
                cout<<name<<": You seem awfully popular"<<endl;
                usleep(2000000);
                cout<<"Bob: Hahaha it would seem so... care to join?"<<endl;
                usleep(2000000);
                cout<<name<<": Nah, just wanted to say hi"<<endl;
                usleep(2000000);              
            }

            count++;
            break;

        default:
            cout<<"Error\n";
    }
}
        
//date event
void Tsundere::Date() {
    cout<<"Where do you want Bob to take you? "<<endl;
    cout<<"1) The beach\n2) An amusement park\n3) A fancy resturaunt";
    cin>>option;
    
    while (option!="1" && option!="2" && option!="3") {
        cout<<"Enter 1, 2, or 3: ";
        cin>>option;
    }
    
    if (option=="1") {
        date_num+=1;
    }
}
