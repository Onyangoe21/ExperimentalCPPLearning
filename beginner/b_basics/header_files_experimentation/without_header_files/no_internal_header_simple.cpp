// In this file, we will for a second assume that the standard library is the  
//only thing with header files as we have seen it is too complicated:

// So let's go ahead bring in our iostream friend:
#include <iostream>

/*

Before we dive into the code, let’s get organized and declare all the functions we’re going to write in this file. I mean, who 
wouldn’t want their `main` function to be front and center, right? It’s like putting the star of the show on stage first and 
letting the supporting cast do their thing behind the scenes -- we are all humans before we write code and we love organization.

So, here’s the plan: we’ll make all the necessary declarations up top because there are only 2 options, put them before main or 
declare them and write them in lower sections. By declaring them first, we can keep things tidy, introduce you to the concept and 
let the `main` function shine in the spotlight, while all the nitty-gritty details hang out below, where only the most curious 
will bother to look. 

It’s a feature of C++ that lets us keep things looking neat and clean—because, let’s face it, who can blame anyone for wanting
to tuck away the complex stuff down in the lower sections where no one’s likely to scroll? It’s all about that peaceful, 
organized code life!

*/

// All declarations so that the thing doing the organizing of the code can see these before trying to call on them:
int annoying_print_1();
int annoying_print_2();
int annoying_print_3();
int annoying_print_4();
int annoying_print_5();
int annoying_print_6();
int annoying_print_7();
int annoying_print_8();
int annoying_print_9();
int annoying_print_10();

// Main function and where the execution starts: From here on, it's a matter of going line by line and there is no looking 
// back: That's why we needed the declarations: we can't afford being here and seeing annoying_print_1() and not knowing 
// what that means:
int main() {
    std::cout<<"Hello there world! We are not allowed to use header files and now this file is messy!"<<std::endl;
    annoying_print_1();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_2();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_3();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_4();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_5();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_6();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_7();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_8();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_9();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    annoying_print_10();
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------"<<std::endl;
}

// ALL THE HELPERS
int annoying_print_1() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 1-----------------------------------"<<std::endl;
    return 0;
}

// ALL THE HELPERS
int annoying_print_2() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 2-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_3() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 3-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_4() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 4-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_5() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 5-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_6() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 6-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_7() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 7-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_8() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 8-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_9() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 9-----------------------------------"<<std::endl;
    return 0;
}

int annoying_print_10() {
    std::cout<<"---------------------another new function we could have pulled in from the header file!------------------"<<std::endl;
    std::cout<<"I am a place holder for a function you could have called from the header file without having to include in the source file!"<<std::endl;
    std::cout<<"---------------------------leaving function annoying print 10-----------------------------------"<<std::endl;
    std::cout<<"FOOD FOR THOUGHT: YOU CAN BE SURE YOU WILL NEED A LOT MORE FUNCTIONS THAN THIS, WOULD YOU WANT TO DO THEM WITHOUT A HEADER FILE?"<<std::endl;
    return 0;
}
