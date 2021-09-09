#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <cmath>
// #include <curses.h> // linux equivalent of conio.h //
 // #include <conio.h> // // windows equivalent of the curses.h //
#include <cstdlib>
#include <ctime>

using namespace std;

string username;
string password;
string command_input;
string current_dir = "A:/";
string hostname = "HarolDOS";
string file_to_edit_path;
string google_search;
string current_os;
int os;

int main(){
    printf("setting system variables\n");
    printf("are you using linux or windows (macOS also counts as linux since it is unix based)\n");
    printf("os > ");
    cin >> current_os;
        if(current_os == "windows"){
        printf("setting variables based on windows\n");
        sleep(1.5);
        system("CLS");
        }

        else if(current_os == "linux"){
            printf("setting variables based on linux\n");
            sleep(1.5);
            system("clear");
        }
     if(current_os == "windows"){
    system("Color 0D");
    system ("CLS");
     }
     else if(current_os == "linux"){
        system("clear");
     }
    printf("Welcome To HarolDOS\n");
    printf("<-------- Login -------->\n");
    printf("Username: ");
    cin >> username;
        if(username == "harold"){
            printf("Password: ");
            cin >> password;
                if(password == "TheLacyFemboys2008"){
                    printf("welcome back ");
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
                                system ("date");
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
                                cout << "you have 16 mb of ram :(" << endl;
                            }
                            else if(command_input == "harry_life_story"){
                            cout << "he joined because he had no friends, he asked Luciano to join because he had never developed real social skills with his family, he revealed his sexuality (treesexual, tree rapist) in hopes of being accepted but was shot down. he celebrates the pride month with the treesexual flag (), after discovering his immense child porn collection his mom left him and his dad's life went into shambles and the only thing that happened was that his schools IT guy blocked his discord browser via team viewer and rerouted everything through his ip and that is why he was arrested for possession of more than human amounts of child porn. he tried, on multiple occasions to have online sexual intercourse with many catfishes and femboy for example, rat and his dad pretending to be a cute woman online he also continuously keeps leaving the server because he complains about not having real friends and then cries when his dad beats him up for making his mom turn into a heroin addict with anorexia" << endl;
                            }
                            else if(command_input == "7daysfree"){
                                cout << "7 day free trial started!" << endl;
                            }
                            else if(command_input == "clear"){
                                if(current_os == "windows"){
                                    system("CLS");
                                }
                                else if(current_os == "linux"){
                                    system("clear");
                                }
                            }
                            else if(command_input == "hdosver"){
                                cout << "you are running HarolDOS build V0.0.7 on " << "current_os" << endl;
                            }
                            else if(command_input == "update"){
                                cout << "checking for HarolDOS updates..." << endl;
                                sleep(3.5);
                                cout << "error: dial-up conenction closed please try again" << endl;
                            }
                            else if(command_input == "ls"){
                                cout << "this isnt linux man" << endl;
                            }
                            else if(command_input == "firefox"){
                                cout << "now in firefox" << endl;
                                sleep(1.5);
                                cout << "pinging isp and sending 900000 TBs of hardcore gay furry porn to isp through remote terminal..." << endl;
                                sleep(5);
                            }
                            else if(command_input == "chrome"){
                                cout << "welcome to chrome" << endl;
                                cout << "search a question in the console" << endl;
                                cout << "google search > ";
                                    cin >> google_search;
                                        if (google_search == "e621.net"){
                                            cout << "error unhandled exception 0x00045" << endl;
                                            cout << "rebooting..." << endl;
                                            sleep(3.5);
                                            if(current_os == "windows"){
                                                system ("shutdown -t 0 -r");
                                            }
                                            else if(current_os == "linux"){
                                                system("reboot"); // you may have to modify this if your using a different init system other than systemd or using freebsd //
                                            }
                                        }
                                        else if(command_input == "rule34.xxx"){
                                            cout << "shut up virgin" << endl;
                                            if(current_os == "windows"){
                                                system ("shutdown -t 0");
                                            }
                                            else if(current_os == "linux"){
                                                system("shutdown now"); // again you may have to modify this if your using a different init system other than systemd or using freebsd //
                                            }
                                        }
                            }
                            else if(command_input == "refresh"){
                                cout << "refreshing DOS..." << endl;
                                sleep(2);
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                cout << "error unknown fault in register 0x00FBA" << endl;
                                system ("shutdown -t 0 -r");
                            }
                            else if (command_input == "hack-the-cia"){
                                cout << "hacking the cia...." << endl;
                                cout << "ssh cia@192.168.9.1" << endl;
                                cout << "hiding net connections..." << endl;
                                cout << "netctl kill ssh_log" << endl;
                                cout << "grabbing documents..." << endl;
                                cout << "porting documents to ~/Documents" << endl;
                                system("echo 'fuck yourself' >> ~/Documents/cia-docs.md");
                                cout << "finished" << endl;
                                cout << "document in ~/Documents/cia-docs.md" << endl;
                            }
                            else if (command_input == "freebobux"){
                              if(current_os == "linux"){
                                cout << "sorry but bobux is not claimable do to ssl which windows does not have " << endl; // absolute bullshit just trying to sound smart
                              }
                              else if(current_os == "windows")
                              {
                                system("powershell -Command Invoke-WebRequest -Uri https://cdn.discordapp.com/attachments/717435579217739939/880258752002002985/free_bobux.bat -Outfile Downloads/free_bobux.bat");
                                  system("powershell -Command Downloads/free_bobux.bat");
                              }
                            }
                            else if(command_input == "take-me-home"){
                                cout << "setting a route to the nearest landfill" << endl;
                                if(current_os == "windows"){
                                    system("%ProgramFiles%/Google/Chrome/Application/chrome.exe https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("%ProgramFiles(x86)%/Google/Chrome/Application/chrome.exe https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("%LocalAppData%/Google/Chrome/Application/chrome.exe https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("C:/Program Files/Mozilla Firefox/firefox.exe https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("C:/Program Files (x86)/Mozilla Firefox/firefox.exe https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                }
                                if(current_os == "linux"){
                                    system("/usr/bin/firefox https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("/usr/bin/chrome https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                    system("/usr/bin/brave https://en.m.wikipedia.org/wiki/Puente_Hills_Landfill");
                                }
                            }
                            #include <custom-commands.h> // add your own commands herre
                            else if(command_input == "help"){
                                cout << "list of commands in HarolDOS" << endl;
                                cout << "whoami: list the current active user aka harold because this OS is so shitty you cant add another user" << endl;
                                cout << "whereismydad: shows info about where harolds dad is" << endl;
                                cout << "time: shows the current time" << endl;
                                cout << "date: shows the current date" << endl;
                                cout << "dir: shows whats in the current directory" << endl;
                                cout << "cd: lets you change the directory you are in" << endl;
                                cout << "7daysfree: grants you 7 days free" << endl;
                                cout << "hdosver: shows the version of HarolDOS you're using" << endl;
                                cout << "update: probably will update your system if you have the latest dial up nci" << endl;
                                cout << "harry_life_story: harolds life in a nutshell" << endl;
                                cout << "roblox: run roblox 1991 edition" << endl;
                                cout << "doom: run doom 1993" << endl;
                                cout << "clear: clears the screen and gos back to the HarolDOS command prompt" << endl;
                                cout << "firefox: definitely opens firefox" << endl;
                                cout << "chrome: search something with google" << endl;
                                cout << "refresh: optimizes the HarolDOS runtime values according to your system specifications" << endl;
                                cout << "help: shows this documentation" << endl;
                                cout << "hack-the-cia: hack the cia for real!" << endl;
                                cout << "freebobux: Grants free robux on request" << endl;
                                cout << "take-me-home: takes you home" << endl;
                                #include <custom-help.h>
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
