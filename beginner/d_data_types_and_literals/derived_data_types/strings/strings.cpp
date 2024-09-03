#include <iostream>
#include <cstring>

// When dealing with strings, we might want to do a lot of things and be able to answer questions like:

int main() {
    char str1[] = "Hello";
    char str2[6] = "Helld";
    char str3[6]; // reserve one spot for the null terminator:
    strcpy(str3, str1); // just like in the case of the arrays, str1 and str2 are representing the pointers to these first characters,
    std::cout<<"The first string is stored at address: "<<&str1<<" second string at address: "<<&str2<<" and the final string at address: "<<&str3<< " and it is expected for these to be in different addresses." << std::endl;
    std::cout<<"String comparison: \n";
    if (strcmp(str1, str2) == 0) {
        std::cout << "Strings are equal\n";
    } else {
        std::cout << "Strings are not equal: result: "<<strcmp(str2, str1)<<"\n";
    }
    std::cout<<"Experimenting with comparing first n chars of 2 strings: \n";
    if (strncmp(str1, str2, 3) == 0) {
        std::cout << "First 3 characters are equal\n";
    } else {
        std::cout << "Strings are not equal: result: "<<strncmp(str1, str2, 3)<<"\n";
    }

    std::cout<<"Getting the pattern of return types from multiple functions: \n";
    std::cout<<"strchr:::::\n";
    std::cout<<"You might expect this to return int but in fact, it returns the string from the occurence: first occurence of l in Hello is: "<<strchr("Hello", 'l')<<std::endl;
    std::cout<<"Finding the last occurence of l in hello is: "<<strrchr("Hello", 'l')<<std::endl;

    std::cout<<"So you might wonder, what would the sub strings return?: Let's see: "<<std::endl;
    std::cout<<"Same pattern: Finding the substring ll in Hello returns: "<<strstr("Hello hello", "ll")<<std::endl;

    std::cout<<"All these return types are detailed in documentation online but getting comfortable with the patterns is helpful: \n";
    std::cout<<"There are more which there might not be too many practical applications buyt come in handy: and they are explored below::\n";
    std::cout<<"Calculating the number of characters in first string that do not appear in second string is done using strcspn and it has the following results: \n";
    std::cout<<"Returns: "<<strcspn("qoituerfbbbjhjsgfsh", "lkalgfjbbblajlf")<< ": for the strings: qoituerfbbbjhjsgfsh and lkalgfjbbblajlf \n";
    std::cout<<"Returns: "<<strcspn("jrhgjhg", "kljhldakhj")<< ": for the strings: jrhgjhg and kljhldakhj \n";
    std::cout<<"Returns: "<<strcspn("Hello", "Garcon")<< ": for the strings: Hello and Garcon \n";

    std::cout<<"How about the strspn?: \n";
    std::cout<<"Returns: "<<strspn("", "lkalgfjbbblajlf")<< ": for the strings: \"\" and lkalgfjbbblajlf \n";
    std::cout<<"Returns: "<<strspn("jrhgjhg", "kljhldakhj")<< ": for the strings: jrhgjhg and kljhldakhj \n";
    std::cout<<"Returns: "<<strspn("Hello", "Garcon")<< ": for the strings: Hello and Garcon \n";
    std::cout<<"Returns: "<<strspn("kfgajhgkkfahGarconjgklajkg", "Garcon")<< ": for the strings: kfgajhgkkfahGarconjgklajkg and Garcon \n";
    std::cout<<"Returns: "<<strspn("GarconHello", "kfgajhgkkfahGarconjgklajkg")<< ": for the strings: GarconHello and kfgajhgkkfahGarconjgklajkg \n";
    std::cout<<"Returns: "<<strspn("Garcon", "")<< ": for the strings: Garcon and \"\" \n";
    std::cout<<"\n";

    std::cout<<"Time to explore some of the more interesting things around memory: \n";
    char test_string_move_1[] = "Edwin Omondi Onyango";
    char test_string_move_2[] = "First Second Thirdname";
    std::cout<<"The two strings before anything is moved are: "<<test_string_move_1<<" at address: "<<&test_string_move_1 <<"::"<<test_string_move_2<<" at address: "<<&test_string_move_2<< ":: for test 1 and 2 respectively: \n";
    memmove(test_string_move_1, test_string_move_2, 9);
    std::cout<<"The two strings after  memmove(test_string_move_1, test_string_move_2, 9);: "<<test_string_move_1<<" at address: "<<&test_string_move_1<<"::"<<test_string_move_2<<" at address: "<<&test_string_move_2<<":: for test 1 and 2 respectively: \n";
    memmove(test_string_move_1, test_string_move_2, 21);
    std::cout<<"How about moving larger string into smaller memory: memmove(test_string_move_1, test_string_move_2, 21);: "<<test_string_move_1<<" at address: "<<&test_string_move_1<<"::"<<test_string_move_2<<" at address: "<<&test_string_move_2<<":: for test 1 and 2 respectively: \n";
    
    std::cout<<"Let's move onto memcpy: what does it do differently?: \n";
    char test_string_move_3[] = "Edwin Omondi Onyango";
    char test_string_move_4[] = "First Second Thirdname";
    std::cout<<"The two strings before anything is moved are: "<<test_string_move_3<<" at address: "<<&test_string_move_3<<"::"<<test_string_move_4<<" at address: "<<&test_string_move_4<<":: for test 1 and 2 respectively: \n";
    memcpy(test_string_move_3, test_string_move_4, 9);
    std::cout<<"The two strings after  memcpy(test_string_move_3, test_string_move_4, 9);: "<<test_string_move_3<<" at address: "<<&test_string_move_3<<"::"<<test_string_move_4<<" at address: "<<&test_string_move_4<<":: for test 1 and 2 respectively: \n";
    memcpy(test_string_move_3, test_string_move_4, 21);
    std::cout<<"How about moving larger string into smaller memory: memcpy(test_string_move_3, test_string_move_4, 21);: "<<test_string_move_3<<" at address: "<<&test_string_move_3<<"::"<<test_string_move_4<<" at address: "<<&test_string_move_4<<":: for test 1 and 2 respectively: \n";
    
    std::cout<<"Let's try to copy or move bigger version than what we have and see what happens:\n";

    char test_string_move_5[] = "Edwin Omondi Onyango";
    char test_string_move_6[] = "move";
    char test_string_move_7[] = "copy";
    char test_string_move_8[] = "Edwin Omondi Onyango";
    memmove(test_string_move_5, test_string_move_6, 9); // changing this to move over 4 characters copies the null terminator in the source string as well and ends up ending the string:
    std::cout<<"The two strings after  memmove(test_string_move_5, test_string_move_6, 9);: "<<test_string_move_5<<" at address: "<<&test_string_move_5<<"::"<<test_string_move_6<<" at address: "<<&test_string_move_6<<":: for test 1 and 2 respectively: \n";
    memcpy(test_string_move_7, test_string_move_8, 3);
    std::cout<<"The two strings after  memcpy(test_string_move_7, test_string_move_2, 9);: "<<test_string_move_7<<" at address: "<<&test_string_move_7<<"::"<<test_string_move_8<<" at address: "<<&test_string_move_8<<":: for test 1 and 2 respectively: \n";
    
    std::cout<<"What about when memories overlap?\n";
    char test_string_move_9[] = "Edwin Omondi Onyango";
    char test_string_move_10[] = "Edwin Omondi Onyango";
    memmove(test_string_move_9 + 1, test_string_move_9 + 6, 10); // changing this to move over 4 characters copies the null terminator in the source string as well and ends up ending the string:
    std::cout<<"The two strings after  memmove(test_string_move_9 + 1, test_string_move_9 + 4, 4);: "<<test_string_move_9<<" at address: "<<&test_string_move_9<<":: \n";
    memcpy(test_string_move_10 + 1, test_string_move_10 + 6, 10);
    std::cout<<"The two strings after  memcpy(test_string_move_9 + 1, test_string_move_9 + 4, 4);: "<<test_string_move_10<<" at address: "<<&test_string_move_10<<":: \n";
}