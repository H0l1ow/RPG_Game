#include <iostream>
#include "Pictures.hpp"


void whichPicWep(int NO)
{
    switch (NO)
    {
        case 0: //sword
        {
            std::cout << R"(
             ,.
             \%`.
              `.%`.
                `.%`.
                  `.%`.
                    `.%`.
                      `.%`.    __
                        `.%`.  \ \
                          `.%`./_/
                            `./ /.
                           __/\/:/;.
                           \__/  `:/;.
                                   `:/;.,    
                                     `:/ ;
                                       `'              
                
             )" << "\n";            
            break;
        }
        case 1: //axe
        {
            std::cout << R"(

                  ,  /\  .  
                 //`-||-'\\ 
                (| -=||=- |)
                 \\,-||-.// 
                  `  ||  '  
                     ||     
                     ||     
                     ||     
                     ||     
                     ||     
                     ()
             )" << "\n";
            break;
        }
        case 2: //mace
        {
            std::cout << R"(

               _^__^_
             .'      `.
             | <   >  |>
            <|   <   >|
              `.____.'
                )__(
                )__(
                )__(
                )__(
                )__(
                )__(
                )__(
                )__(
                )__(
               <<()>> 
          
            )" << "\n";                         
            break;
        }
        case 3: //bow
        {
            std::cout << R"(
           4$$-.                         
           4   ".                                        
           4    ^.                                       
           4     $                                       
           4     'b                                      
           4      "b.                                    
           4        $                                    
           4        $r                                   
           4        $F                                   
-$b========4========$b====*P=-                           
           4       *$$F                                  
           4        $$"                                  
           4       .$F                                   
           4       dP                                    
           4      F                                      
           4     @                                       
           4    .                                        
           J.  ,                                          
          '$$,,   
                
            )" << "\n";
            break;
        }
        case 4: //spear
        {
            std::cout << R"(
          _
         |/|
         ) (
         ) (
         ) (
         ) (
         ) (
         ) (
         ) (
         ) (
         ) (
         |/|
         |/|
         |/|
      ___|/|___
     /<>_____<>\
    /  / |/\| \ \
    //"  //\\  "\\
    |/  //  \\  \|
        |/)(\|
          ||
          ||
          \/
            )" << "\n";                             
            break;
        }
        default: //fists
        {
            std::cout << R"(
  .----.-----.-----.-----.
 /      \     \     \     \
|  \/    |     |   __L_____L__
|   |    |     |  (           \
|    \___/    /    \______/    |
|        \___/\___/\___/       |
 \      \     /               /
  |                        __/
   \_                   __/
    |        |         |
    |                  |
    |                  |

            )" << "\n";
            break;
        }

    }
}

void whichPicMob(int NO)
{
    switch (NO)
    {
        case 0:
        {
            
            
            break;
        }
        default:
        {

            break;
        }
    }


}


