/*
This file introduces you to namespace in c++ as this is going to be handy as you go through the other portions of c++.
*/
#include <iostream> 

using namespace std; // How can you be able to do this and suddenly, everything that needed to start with std::blahblah disappears?
// For example, we used to say std::cout<<"Hello World"<<std::endl; but now we will simply say cout<<"Hello World"<<endl;

// First killing it
namespace sad { // I had to put these on top before introducing them because c++ goes in a sequence and will miss them if i call them before they are declared.
    int killing_it() {
        cout<<"I'm killing this cockroach!"<<endl;
        return 0; // our function is of type int and so we need to return integer -- main function special and does not require this
    }
}
// Second killing it
namespace happy {
    int killing_it() {
        cout<<"I am loving c++! I am really killing it!"<<endl;
        return 0;
    }
}

int main() { 
    cout<<"Hello World"<<endl;
    sad::killing_it();
    happy::killing_it();
    return 0; // This line is not required but returns something that matches integer as out function declaration states
}

/*

You havent done functions very much but imagine you wanted to organize different variables and you would really love to use the same 
name for them, only that you want to be using them in different contexts:

If you have seen classes before, you are probably asking: why do I need namespace for that -- why can't I just use classes but there 
if a distinction between simply "organizing" and "encapsulating" which is a better way to describe what classes do. Classes are for 
when you want so much more like inheritance and the likes:

So what problem might the inventor of namespace have run into? This person was likely killing it and wanted to use this word in 2 
different contexts: the sad kind of killing it in which case they would say:

int killing_it() {
    cout<<"I'm killing this cockroach!"<<endl;
}

And just for fun, they also wanted the happy kind of killing it where they say: 
int killing_it() {
    cout<<"I am loving c++! I am really killing it!"<<endl;
}

Look at how confusing that is: but do you really need a class for this? No. All you need is something to help distinguish which killing 
it you are referring to and namespace can help you with this distinction because you can simply write the block above:

// First killing it
namespace sad {
    int killing_it() {
        cout<<"I'm killing this cockroach!"<<endl;
        return 0; // our function is of type int and so we need to return integer -- main function special and does not require this
    }
}
// Second killing it
namespace happy {
    int killing_it() {
        cout<<"I am loving c++! I am really killing it!"<<endl;
        return 0;
    }
}

and now you have declared your own way of organizing namespace and at the same time declared yours to help you organize: now if there 
was another sort of category you wanted like happy sort of hate_it and a sad sort, you will simply need to add each under the respective
namespaces.

*/


