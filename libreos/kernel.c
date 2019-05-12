#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
kmain()
{
       clearScreen();
       print("Welcome to LibreOS!\n");
       while (1)
       {
                print("\n$ ");
                
                string ch = readStr();
                if(strEql(ch,"sh"))
                {
                        print("\nYou are already in sh!\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }
                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
        
}
