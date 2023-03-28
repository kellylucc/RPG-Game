#include <iostream>
#include <unistd.h>
using namespace std;
#include "Character.h"
#include "ChildhoodFriend.h"

ChildhoodFriend::ChildhoodFriend(string _n):Character(_n) {
    name=_n;
    love_lvl=0;
    date_num=0;
    count=1;
}

void ChildhoodFriend::MakeDialogue() {
    switch(count) {
        case 1:
            cout<<"===DAY 1==="<<endl;
            usleep(2000000);
            cout<<"You’re totally going to be late for your first day at uni"<<endl;
            usleep(2000000);
            cout<<"Somehow, everything that could’ve gone wrong has gone wrong on this day"<<endl;
            usleep(2000000);
            cout<<"From having forgotten to set an alarm to wake up, to spilling your morning coffee on the countertop, to missing the closest bus, to now, getting lost on school campus, it’s a miracle that it’s not already 30 minutes past the start of the lesson"<<endl;
            usleep(2000000);
            cout<<"You silently curse yourself for being this clumsy, but the fear of messing up on your first day of school quickly overshadows any other emotion you were feeling"<<endl;
            usleep(2000000);
            cout<<"As you scroll through the campus map on your phone for the 28th time, as clueless of your whereabouts as the 1st time you looked at the map, you start to grow more desperate and restless"<<endl;
            usleep(2000000);
            cout<<"Frantically, you look around the area, hoping that there’s someone you can ask for directions."<<endl;
            usleep(2000000);
            cout<<"But then, you remembered - you’re hopelessly shy."<<endl;
            usleep(2000000);
            cout<<"Ever since last summer holiday, you’ve become a social recluse, barely going out and rarely talking to people outside your family"<<endl;
            usleep(2000000);
            cout<<"Even in tense situations like this, you’ve never been able to gather the courage to interact with a stranger"<<endl;
            usleep(2000000);
            cout<<"There are many students around the area - no doubt also in a hurry to their respective classrooms - but no one seems to pay attention to you"<<endl;
            usleep(2000000);
            cout<<"After what seemed like an hour of purely wondering whether today would be the day you finally learn how to ask someone a simple question about directions, you shakily walk up to the nearest person standing in the area"<<endl;
            usleep(2000000);
            cout<<"You open your mouth, mentally preparing to ask the question you’ve memorized and repeated over and over again internally"<<endl;
            usleep(2000000);
            cout<<"But before the first syllable could come out, you hear him speak\n"<<endl;
            usleep(2000000);
            cout<<"???: "<<name<<"?\n"<<endl;
            usleep(2000000);
            cout<<"Maybe it’s because you’ve barely woken up; you take 5 full seconds to register this person’s face, and it takes you another 3 seconds to recognize who this person is"<<endl;
            usleep(2000000);
            cout<<"The person you’re talking to is Thomas."<<endl;
            usleep(2000000);
            cout<<"Thomas has been a close childhood friend from as far as you can remember"<<endl;
            usleep(2000000);
            cout<<"Since primary school, you two have been studying in the same schools and even living in the same neighbourhood. That is, until he went to study abroad in America a year ago"<<endl;
            usleep(2000000);
            cout<<"For some reason though, Thomas didn’t really respond to your communication efforts"<<endl;
            usleep(2000000);
            cout<<"The interaction between you two has slowly dwindled throughout the months, to the point where you were fully ready to grieve for another close friendship lost"<<endl;
            usleep(2000000);
            cout<<"But then, there he is in front of you again, and it took you 8 seconds to recognize who he is"<<endl;
            usleep(2000000);
            cout<<"Thomas: "<<name<<", it's you, right?"<<endl;
            usleep(2000000);
            cout<<"I didn't know you were studying at this university too."<<endl;
            usleep(2000000);
            cout<<"It's been a long time since we've talked, hasn't it "<<name<<"\n"<<endl;
            usleep(2000000);
            cout<<"A thousand thoughts run through your mind"<<endl;
            usleep(2000000);
            cout<<"On one hand, you feel relieved that a familiar face is here; on the other, you feel annoyed by what he said - it was his fault that you’ve not talked for ages!"<<endl;
            usleep(2000000);
            cout<<"\nDespite your mixed feelings, you are very aware of the passage of time, and you are still as lost as ever. How do you respond?"<<endl;
            usleep(2000000);
            cout<<"1) Yeah we haven’t talked in months! I didn’t know that you’re studying at this university either!\n2) I can’t really talk because I need to go somewhere right now and I don’t know where it is. I figured I could come to you for some help.\n3) It’s been a long time since YOU’ve talked. I tried texting you so many times but you just don’t reply!"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": What a lucky coincidence huh?"<<endl;
                cout<<"Thomas: We’ve been in the same schools for most of our lives and it seems like the tradition is continuing even through university"<<endl;
                love_lvl=love_lvl+5;
            } else if (option=="2") {
                cout<<"Thomas: Ah, I thought you looked distressed. I knew it was something related to directions knowing how you are with maps"<<endl;
                love_lvl=love_lvl+3;
            } else if (option=="3") {
                cout<<"Thomas: Oh, yeah… Sorry about that"<<endl;
                love_lvl=love_lvl-3;
            }
            usleep(2000000);

            cout<<"Thomas: Anyways, you’re probably looking for your classroom right?"<<endl;
            usleep(2000000);
            cout<<"Thomas: I could tell from 50 miles away"<<endl;
            usleep(2000000);
            cout<<"Thomas: I went on a campus tour a week ago, so I might be able to lead you to where you need to go."<<endl;
            usleep(2000000);
            cout<<"Thomas: I’ll lead the way. You trust me, right?"<<endl;
            usleep(2000000);
            cout<<"\nYou’re grateful for the help, but you weren’t really listening to what he said"<<endl;
            usleep(2000000);
            cout<<"Having looked at Thomas for more than a minute, you’re pondering if it’s the way he offered you help in a desperate situation that makes him look so charming, or if a year is really enough to change a person’s appearance this much."<<endl;
            usleep(2000000);
            cout<<"Has he always been this charismatic?"<<endl;
            usleep(2000000);
            cout<<"In any case, what you’re feeling can be put aside for now; there’s still a lesson for you to attend. Your reply is brief.\n"<<endl;
            usleep(2000000);
            cout<<name<<": Of course, I trust you."<<endl;
            usleep(2000000);
            cout<<"Thomas quickly starts walking towards a building you can swear you’ve walked through a thousand times before. In between breaths, he tries to start a conversation."<<endl;
            usleep(2000000);
            cout<<name<<": I probably forgot to tell you this, but I returned from the States maybe 2 months or so ago\n"<<endl;
            usleep(2000000);
            cout<<"1) You did forget to tell me\n2) stay silent to listen to what he says next]\n3) Was it fun?"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<"Thomas: Yeah, figured…"<<endl;
                love_lvl=love_lvl-3;
            } else if (option=="2") {
                cout<<"Thomas: ..."<<endl;
            } else if (option=="3") {
                cout<<"Thomas: Yeah, of course! Kinda wished you were there though - there were so many places that you like that I could take you to!"<<endl;
                love_lvl=love_lvl+3;
            }
            usleep(2000000);
            
            cout<<"\nThomas: After the study abroad trip, I really learned a lot of new stuff, but I figured that it would be better for me to study at a uni in my home country, so I came back. But you won’t believe the things I saw in the States! Let me just tell you..."<<endl;
            usleep(2000000);
            cout<<"As you listen to what he’s saying, you slowly immerse yourself in Thomas’ storytelling."<<endl;
            usleep(2000000);
            cout<<"You forget that you’re rushing towards a classroom, and the exhaustion you once felt in your legs slowly starts to disappear"<<endl;
            usleep(2000000);
            cout<<"You never found the United States to be interesting, but somehow Thomas’ stories are so intriguing that you want to go there together with him…"<<endl;
            usleep(2000000);
            cout<<"...wait, with him??"<<endl;
            usleep(2000000);
            cout<<"In any case, you finally make your way to the classroom."<<endl;
            usleep(2000000);
            cout<<"Thomas: Well, here we are. This should be your classroom."<<endl;
            usleep(2000000);
            cout<<name<<": Oh okay, thanks"<<endl;
            usleep(2000000);
            cout<<"You start the first class of your university life. You meet new people, get used to the place, finish your classes for the day, and go home."<<endl;
            usleep(2000000);
            cout<<"However, you can’t stop thinking about your encounter with Thomas…"<<endl;
            usleep(2000000);

            count+=1;
            break;
            
        case 2:
            cout<<"==DAY 2==\n"<<endl;
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
            cout<<"In the corner of my eye, I see Thomas standing outside of the building"<<endl;
            usleep(2000000);
            cout<<"Thomas: Hey! You're late!"<<endl;
            usleep(2000000);
            cout<<name<<": You wanted for me?"<<endl;
            usleep(2000000);
            cout<<"Thomas: Of course we are friends!"<<endl;
            usleep(2000000);
            cout<<"Thomas: We're late... what do we do?"<<endl;
            usleep(2000000);
            cout<<"\n1) Run to class\n2) Skip school and go to the arcade\n3) Walk slowly to school"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": Lets run to class!"<<endl;
                usleep(2000000);
                cout<<name<<": I hope you can keep up"<<endl;
                usleep(2000000);
                cout<<"Thomas: Haha good idea"<<endl;
                usleep(2000000);
                cout<<"Thomas: Lets run!"<<endl;
                usleep(2000000);
                cout<<"We made it to class on time"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+3;
            } else if (option=="2") {
                cout<<name<<": Lets skip school and go to the arcade"<<endl;
                cout<<"Thomas: You read my mind!"<<endl;
                cout<<"Thomas: Lets go!"<<endl;
                cout<<name<<": Yes!"<<endl;
                cout<<name<<": Promise me we will go to class on time tomorrow"<<endl;
                cout<<"Thomas: Of course!"<<endl;
                cout<<name<<": Yay! I'm so excited!!"<<endl;
                cout<<"It was a good idea to skip class, I had so much fun!"<<endl;
                love_lvl=love_lvl+5;
            } else if (option=="3") {
                cout<<name<<": Lets walk slowly to class"<<endl;
                cout<<"Thomas: Yeah, good idea! We can catch up on what's happening"<<endl;
                cout<<"By the time we walked to class, we were really late and got told off by the teachers"<<endl;
                love_lvl=love_lvl-3;
            }

            count+=1;
            break;

        case 3:
            cout<<"==DAY 3=="<<endl;
            usleep(2000000);
            cout<<"It is a sunny day today"<<endl;
            usleep(2000000);
            cout<<"This time, I set my alarm and woke up early to make breakfast"<<endl;
            usleep(2000000);
            cout<<name<<": Oh, it looks like I still have some left over"<<endl;
            usleep(2000000);
            cout<<name<<": What should I do with this left over food?\n"<<endl;
            usleep(2000000);
            cout<<"1) Give the left over food to Thomas\n2) Throw the food away in front of Thomas\n3) Save the rest of the food for later today\n"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<"Maybe I will give the left over food to Thomas"<<endl;
                usleep(2000000);
                cout<<"Lets go over to his house"<<endl;
                usleep(2000000);
                cout<<name<<": Hey bestie, I have some left over food"<<endl;
                usleep(2000000);
                cout<<name<<": Do you want some?"<<endl;
                usleep(2000000);
                cout<<"Thomas: Yeah, of course!"<<endl;
                usleep(2000000);
                cout<<"Thomas: Thanks!"<<endl;
                usleep(2000000);
                cout<<"Thomas takes a bite from the homemade meal"<<endl;
                usleep(2000000);
                cout<<"Thomas: This is delicious!!"<<endl;
                usleep(2000000);
                cout<<name<<": Thank you!"<<endl;
                usleep(2000000);
                love_lvl=love_lvl+3;
            } else if (option=="2") {
                cout<<"I'm bored and Thomas is not coming"<<endl;
                usleep(2000000);
                cout<<"Lets go to him and throw the home made meal away in front of him"<<endl;
                usleep(2000000);
                cout<<"You enter to Thomas' house"<<endl;
                usleep(2000000);
                cout<<"Thomas: Hey, what's up?"<<endl;
                usleep(2000000);
                cout<<name<<": You mean what's down?"<<endl;
                usleep(2000000);
                cout<<"Thomas: ???"<<endl;
                usleep(2000000);
                cout<<name<<": Look down"<<endl;
                usleep(2000000);
                cout<<"You throw away the food in his bin"<<endl;
                usleep(2000000);
                cout<<"Thomas:... Why did you do that?"<<endl;
                usleep(2000000);
                love_lvl=love_lvl-3;
            } else if (option=="3") {
                cout<<"Lets same the rest of the food and do some studying!"<<endl;
                usleep(2000000);
            }
  
            count+=1;
            break;
                
        case 4:
            cout<<"==Day 4=="<<endl;
            cout<<"I send Thomas a good morning text."<<endl;
            usleep(2000000);
            cout<<"He sends one back and tells me that he's feeling a bit under the weather. What should I do?"<<endl;
            usleep(2000000);
            cout<<"\n1)Send him a 'get well soon' message\n2)Call him and ask how he is\n3)Visit him with food and drinks to help him get better.\n4)Say nothing."<<endl;
            usleep(2000000);
            cin>>option;
            
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": Lets send him a 'get well soon' message!"<<endl;
                usleep(2000000);
                cout<<name<<": I hope he gets better soon"<<endl;
                love_lvl=love_lvl+1;
            } else if (option=="2") {
                cout<<name<<": Lets give Thomas a call"<<endl;
                cout<<"Never mind, he must be busy"<<endl;
                love_lvl=love_lvl-1;
            } else if (option=="3") {
                cout<<name<<": I must go visit Thomas and nurse him back to health"<<endl;
                usleep(2000000);
                cout<<"You go over to Thomas' house and knock on his door"<<endl;
                usleep(2000000);
                cout<<name<<": Hello?"<<endl;
                usleep(2000000);
                cout<<name<<": ... Is no one home?"<<endl;
                usleep(2000000);
                cout<<"You open the door and see Thomas on the floor"<<endl;
                usleep(2000000);
                cout<<name<<": Oh no! I must get him to his bed immediately"<<endl;
                usleep(2000000);
                cout<<name<<": Lets go make him some food"<<endl;
                usleep(2000000);
                cout<<"When you finish cooking, you walk over to Thomas' room and he opens his eyes"<<endl;
                usleep(2000000);
                cout<<name<<": Here, take a bite"<<endl;
                usleep(2000000);
                cout<<"Thomas hugs you tightly"<<endl;
                usleep(2000000);
                cout<<"Thomas: Thank you for always looking out for me"<<endl;
                usleep(2000000);
                cout<<name<<": Of course!"<<endl;
                love_lvl=love_lvl+3;
            }
            
            count+=1;
            break;
            
        case 5:
            cout<<"==DAY 5=="<<endl;
            usleep(2000000);
            cout<<"Thomas goes over to your house as asks if you want to hangout"<<endl;
            usleep(2000000);
            cout<<name<<": Where are we going?"<<endl;
            usleep(2000000);
            cout<<"Thomas: How does the beach sound?"<<endl;
            usleep(2000000);
            cout<<"\n1) It sounds amazing! Lets go!\n2) Sure... I don't mind\n3) No thanks, I would rather stay at home lol"<<endl;
            cin>>option;
                
            while (option!="1" && option!="2" && option!="3") {
                cout<<"Enter 1, 2, or 3: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": That sounds amazing! Lets go!"<<endl;
                usleep(2000000);
                cout<<"Thomas: I thought you would like it"<<endl;
                usleep(2000000);
                cout<<"Thomas: You sound very excited"<<endl;
                usleep(2000000);
                cout<<name<<": That's because I am! Lets leave right now"<<endl;
                usleep(2000000);
                cout<<"You both have a fun day at the beach"<<endl;
                love_lvl=love_lvl+2;
            } else if (option=="2") {
                cout<<name<<": Sure.. I don't mind"<<endl;
                usleep(2000000);
                cout<<"Thomas: You don't sound very excited"<<endl;
                usleep(2000000);
                cout<<name<<": Lets just go..."<<endl;
                usleep(2000000);
                cout<<"You both went to the beach, the day was alright but not the best"<<endl;
                love_lvl=love_lvl+1;
            } else if (option=="3") {
                cout<<name<<": No thanks, I would rather stay at home"<<endl;
                usleep(2000000);
                cout<<"Thomas: Ok then..."<<endl;
                usleep(2000000);
                cout<<"In the end, Thomas went home and you both never went to the beach"<<endl;
                love_lvl=love_lvl-2;
            }
            
            count+=1;
            break;
                
        case 6:
            cout<<"==DAY 6=="<<endl;
            cout<<name<<": Hmm... it's raining today"<<endl;
            usleep(2000000);
            cout<<name<<": What should I do with my day?\n"<<endl;
            usleep(2000000);
            cout<<"1) Stay home and game\n2) Suggest to study with Thomas"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2") {
                cout<<"Enter 1 or 2: ";
                cin>>option;
            }
            if (option=="1") {
                cout<<name<<": Lets stay home and game"<<endl;
                usleep(2000000);
                cout<<name<<": Wow, I'm such a gamer!"<<endl;
            } else if (option=="2") {
                cout<<name<<": Last time I saw Thomas, it seemed like he was struggling with his homework"<<endl;
                usleep(2000000);
                cout<<name<<": Lets go help him!"<<endl;
                usleep(2000000);
                cout<<"You head over to Thomas's house and ask if he needs help"<<endl;
                usleep(2000000);
                cout<<"Thomas: Thanks! That would be a great help"<<endl;
                usleep(2000000);
                cout<<"You both studied for a bit and decided to play games after"<<endl;
                usleep(2000000);
                cout<<"What a wonderful day!"<<endl;
                love_lvl=love_lvl+2;
            }
            usleep(2000000);

            count+=1;
            break;
                
        case 7:
            cout<<"Today, I'm having a sleepover with Thomas. I'm so excited!"<<endl;
            usleep(2000000);
            cout<<"I go over to his house and we spend the whole day playing video games. "<<endl;
            usleep(2000000);
            cout<<"It's night time now, I'm a little dirty now... What should I do?"<<endl;
            usleep(2000000);
            cout<<"1) Stay dirty and shower tomorrow\n2) Ask to use Thomas' shower"<<endl;
            cin>>option;
            
            while (option!="1" && option!="2") {
                cout<<"Enter 1 or 2: ";
                cin>>option;
            }

            if (option=="1"){
                love_lvl=love_lvl-4;
                cout<<"Thomas: Ew... You're not showering tonight?"<<endl;
                usleep(2000000);
                cout<<"You both go to bed"<<endl;
            } else if (option=="2"){
                love_lvl=love_lvl+3;
                cout<<name<<": Thomas, could I use your shower?"<<endl;
                usleep(2000000);
                cout<<"Thomas: Of course!"<<endl;
                usleep(2000000);
                cout<<"I enter the bathroom and notice that there is not a lock on the door. Interesting. No one will come in anyway."<<endl;
                usleep(2000000);
                cout<<"I am in the shower, and suddenly, I hear the door opening?!?!? I peak out of the shower curtain."<<endl;
                usleep(2000000);
                cout<<name<<": Thomas?!? What are you doing?!?"<<endl;
                usleep(2000000);
                cout<<"Thomas: Sorry love... I'm just taking a quick piss"<<endl;
                usleep(2000000);
                cout<<name<<": Thomas! I'm in the shower!"<<endl;
                usleep(2000000);
                cout<<"Thomas: Don't worry, I've known you since i was 6, we're like brother and sister"<<endl;
                usleep(2000000);
                cout<<"You quickly close the shower curtain."<<endl;
                usleep(2000000);
                cout<<name<<": I wish we were more..."<<endl;
                usleep(2000000);
                cout<<"Thomas: I wish we were more..."<<endl;
                usleep(2000000);
                cout<<"You quickly open the shower curtains again."<<endl;
                usleep(2000000);
                cout<<name<<": What dod you say?!?"<<endl;
                usleep(2000000);
                cout<<"Thomas: Uhh, Auuhhhh, nothing."<<endl;
                usleep(2000000);
            }    
            
            count+=1;
            break;
            
        default:
            cout<<"Error\n";
        
    }
}

void ChildhoodFriend::Date() {
    cout<<"Where do you want Thomas to take you? "<<endl;
    cout<<"1) The beach\n2) An amusement park\n3) A fancy resturaunt";
    cin>>option;
    
    while (option!="1" && option!="2" && option!="3") {
        cout<<"Enter 1, 2, or 3: ";
        cin>>option;
    }
    
    if (option=="2") {
        date_num+=1;
    }
}