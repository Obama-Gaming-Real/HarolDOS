#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <cmath>
#include <conio.h>

using namespace std;

string username;
string password;
string command_input;
string current_dir = "A:/";
string hostname = "HarolDOS";
int os;

int main(){
    system("Color 0D");
    system ("CLS");
    printf("Welcome To HarolDOS\n");
    printf("<-------- Login -------->\n");
    printf("Username: ");
    cin >> username;
        if(username == "harold"){
            printf("Password: ");
            cin >> password;
                if(password == "TheLacyFemboys2008"){
                    printf("welcome back");
                    cout << username << endl;
                    cout << "input a command" << endl;
    while(os = 1){
                        cout << current_dir << endl;
                        cout << username << " @ " << hostname << " $> ";
                        cin >> command_input;
                            // long line of commands //
                            if(command_input == "whoami"){
                                cout << username << endl;
                            }
                            else if (command_input == "whereismydad") {
                                cout << "I'm in albania living with my neighbors eating dirt from the front yard of their crack den" << endl;
                            }
                            else if (command_input == "time"){
                                cout << "pinging location and ip and sending 9000tbs of child porn to ccp servers in mainland china" << endl;
                            }
                            else if (command_input == "date"){
                                cout << "error, not enough memory to perform action" << endl;
                            }
                            else if (command_input == "dir"){
                                cout << "please wait... Reading 2 rpm hard drive" << endl;
                                sleep(10);
                                if(current_dir == "A:/"){
                                cout << "<-------- Contents Of A: -------->" << endl;
                                cout << "games" << endl; // barely work on HarolDOS //
                                cout << "furry_futa" << endl;
                                cout << "documents" << endl;
                                cout << "loli_hentai" << endl; // harold gaming //
                                cout << "<-------- end of directory -------->" << endl;
                            }
                                else if (current_dir == "A:/games"){
                                    cout << "<-------- Contents Of games -------->" << endl;
                                    cout << "doom hacked cheats halal working 1992.exe" << endl;
                                    cout << "roblox 1991 edition.exe" << endl;
                                    cout << "minecraft bedrock working 2021 halal cracked apk no virus.apk" << endl;
                                    cout << "<-------- end of directory -------->" << endl;
                                }
                                else if(current_dir == "A:/furry_futa"){
                                    cout << "hdghdhssuuu866sesf654make9887aadfr00.png" << endl;
                                    cout << "futa docking.png" << endl;
                                    cout << "quad futa gangbang.png" << endl;
                                    cout << "femboy furry getting top.png" << endl;
                                    cout << "<-------- end of directory -------->" << endl;
                                }
                                else if(current_dir == "A:/documents"){
                                    cout << "important file.txt" << endl;
                                    cout << "non existant tax returns document.pfd" << endl;
                                    cout << "resume for working at a cotton picking farm for 2 cents anually.pfd" << endl;
                                }
                                else if(current_dir == "A:/loli_hentai"){
                                    cout << "please get some help.md" << endl;
                                    cout << "loli gangbang.png" << endl;
                                    cout << "r7463kdjg9777ddjggjj99765jhhdjks.png" << endl;
                                    cout << "loli rule34.png" << endl;
                                }
                            }
                            else if (command_input == "exit"){
                                sleep(0.5);
                                cout << "exiting HarolDOS..." << endl;
                                sleep(1.5);
                                exit(0);
                            }
                            else if(command_input == "doom"){
                                cout << "error, not enough vram to launch doom 1993, please upgrade your gpu" << endl;
                            }
                            else if(command_input == "roblox"){
                                cout << "error, required amount of ram to launch roblox 1991 is 64 mb" << endl;
                                cout << "you have 16 mb of ram" << endl;
                            }
                            else if(command_input == "harry_life_story"){
                            cout << "he joined because he had no friends, he asked Luciano to join because he had never developed real social skills with his family, he revealed his sexuality (treesexual, tree rapist) in hopes of being accepted but was shot down. he celebrates the pride month with the treesexual flag (), after discovering his immense child porn collection his mom left him and his dad's life went into shambles and the only thing that happened was that his schools IT guy blocked his discord browser via team viewer and rerouted everything through his ip and that is why he was arrested for possession of more than human amounts of child porn. he tried, on multiple occasions to have online sexual intercourse with many catfishes and femboy for example, rat and his dad pretending to be a cute woman online he also continuously keeps leaving the server because he complains about not having real friends and then cries when his dad beats him up for making his mom turn into a heroin addict with anorexia" << endl;
                            }
                            else if(command_input == "7daysfree"){
                                cout << "7 day free trial started" << endl;
                            }
                            else if(command_input == "clear"){
                                system ("CLS");
                            }
                            else if(command_input == "hdosver"){
                                cout << "you are running HarolDOS beta build V0.0.3" << endl;
                            }
                            else if(command_input == "update"){
                                cout << "checking for HarolDOS updates..." << endl;
                                sleep(3.5);
                                cout << "error: dial-up conenction closed please try again" << endl;
                            }
                            else if (command_input == "cd"){
                                cin >> current_dir;
                                if (current_dir == "A:/games"){
                                    cout << "now in games" << endl;
                                }
                                else if(current_dir == "A:/furry_futa"){
                                    cout << "now in furry futa" << endl;
                                }
                                else if(current_dir == "A:/documents"){
                                    cout << "now in documents" << endl;
                                }
                                else if(current_dir == "A:/loli_hentai" ){
                                    cout << "now in loli hentai, get some help please" << endl;
                                }
                                else if(current_dir == "A:"){
                                    cout << "now in A:" << endl;
                                }
                                else{
                                    cout << "error, directory either does not exist or has been typed in wrong, please try again" << endl;
                                }
                            }
                            else{
                                cout << "Error, invalid command" << endl;
                            }
                }
    }
}
}