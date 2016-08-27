//
//  main.c
//  Iron Yard Adventure 4
//
//  Created by Andrew Barber on 8/27/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>

int travel = 1;

int main(int argc, const char * argv[]) {
    
    printf("It has been a long night. What should I expect?\n");
    printf("The lights flicker and go out.\n");
    printf("'Is someone there?' you say aloud, as the room gets cold.\n");
    printf("Where should you explore?\n");
    printf("0: Stay in the Sun Room.\n");
    printf("1: The Bathroom...\n");
    printf("2: Classroom, supplies maybe?\n");
    printf("3: Head to the Office\n");
    printf("4: Front Kitchen\n");
    printf("5: Staircase, I'll just leave!\n");
    scanf("%d", &travel);
    
    switch (travel) {
        case 0:
            printf("Waiting... and the air gets more chilly and cold. 'What's going on?!'.\n");
            printf("What do you want to do?\n");
            printf("0: Keep waiting\n");
            printf("1: Get some coffee\n");
            scanf("%d", &travel);
            
            switch (travel) {
                case 0:
                    printf("Somewhere along the way, you lose focus and sleep.\n");
                    printf("You slip away somewhere, but you'll never know where.\n");
                    return 0;
                
                case 1:
                    printf("Sometimes anyone could use a pick me up. Thankfully the coffee is still warm!\n");
                    printf("But... now you have to use the bathroom..\n");
                    printf("You head over to the bathroom\n");
                default:
                    printf("Such a strange night.\n");
                    break;
            }
            
        case 1:
            printf("Sometimes nature calls...\n");
            printf("Ahh, much better..\n");
            printf("Wait, what is this?");
            printf("You find a string behind the large pillar in the equally large bathroom stall.\n");
            printf("Will you pull the string?\n");
            printf("0:Yes\n1:No\n");
            scanf("%d", &travel);
            
            switch (travel) {
                case 0:
                    printf("You pull the string, the bricks pull back and a massive dark hole comes from out of no where. You try to move away but it pulls you in and there is no escape. You were sucked into the void.\n\n");
                    return 0;

                case 1:
                    printf("I'm not pulling some silly string.\n");
                    printf("Where would you like to go?\n");
                    printf("1: Head to the Office\n");
                    printf("2: Classroom, supplies maybe?\n");
                    printf("4: Front Kitchen\n");
                    printf("5: Staircase, I'll just leave!\n");
                    scanf("%d", &travel);
                    
                    switch (travel) {
                        case 1:
                        case 2:
                        case 4:
                        case 5:
                            printf("As you leave the bathroom you look toward the staircase. It's dark, looming with a mist.\n");
                            printf("A figure, hunched with wirey hair, black and wrinkled creeps up and makes a gesture at you with a crippled arm.\n");
                            printf("You panic, as the creatre bellows your name. The low voice of a woman.\n");
                            printf("What do you do?\n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            printf("0: You do nothing in your panic. \n");
                            return 0;
                            
                        default: printf("0: You do nothing in your panic. \n\n\n");
                            return 0;
                    }
                    
                default:
                    break;
            }
            
            break;
            
            
        case 2:
            printf("Heading over the class, you only find dry erase markers and empty seats.\n");
            printf("You take a look at the office, which is nearby, instead.\n");
            
            
            
        case 3:
            printf("There are various things around the office. You take a pen off of Isabels desk.\n");
            printf("Where will go tavel now?\n");
            printf("2: Classroom.\n");
            printf("4: Front Kitchen\n");
            printf("5: Staircase, I'll just leave!\n");
            scanf("%d", &travel);
            
            switch (travel) {
                case 2:
                case 4:
                case 5:
                    printf("As you leave the bathroom you look toward the staircase. It's dark, looming with a mist.\n");
                    printf("A figure, hunched with wirey hair, black and wrinkled creeps up and makes a gesture at you with a crippled arm.\n");
                    printf("You panic, as the creatre bellows your name. The low voice of a woman.\n");
                    printf("What do you do?\n");
                    printf("0: Make a stand.\n");
                    printf("1: RUN. \n");
                    scanf("%d", &travel);
                    
                    switch (travel) {
                        case 0:
                            printf("You take the pen, and make a lunge at the creature.\n");
                            printf("Taking a jab at one of the crooked arms.\n");
                            printf("A howl is let out and the mist receedes, taking the darkness and cold with it.\n");
                            printf("The lights come back on and you wonder if it was a dream.\nThen you see Isabel's pen on the floor.\n");
                            return 0;
                            
                        case 1:
                            printf("You panic, run, but you seem to move slowly... and the mist consumes you as you run away.\n");
                            return 0;
                            
                        default:
                            printf("Start over.\n\n\n");
                            break;
                    }
                    break;
                    
                default:
                    break;
            }
            
            break;
            
            
        case 4:
            printf("Never having had expored the Front Kitchen, you find a unique amount of supplies!\n");
            break;
            
            
        case 5:
            printf("I'm a bit creeped out, time to make an exit for it.\n");
            break;
            
            
        default:
            printf("Lets be honest, you can't do nothing.\n");
            return 1;
            
    }
    
    return 0;
}
