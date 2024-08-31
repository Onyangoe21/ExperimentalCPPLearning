Functions are important in any language:

While wondering what exactly a function, thinking of it as the smallest unit of code you would design to do something that needs a couple lines: for example, do you need a something to print multiple lines of greeting when you call on other functions? That things is a function because unless you want to repeat a set of lines over and over again, it is good to encapsulate all of them under one name:

In c++, this is the basic structure: 

```
/* first part is return type: then function name(then parameters it takes in parenthesis) semi colon if we are simplu declaring otherwise we open the block with { all the lines and expressions to be executed go here just like below}:
*/

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
    int a = 10, b = 20;

    // Calling above function to find max of 'a' and 'b'
    int m = max(a, b);

    cout << "m is " << m;
    return 0;
}
```

### Types of Functions

#### User defined function

These are the functions you write in the structure provided above:

#### Library functions

These are the built in functions: Since they are built in, the thing you care about the most is how exactly you can use them:

You might be curious about how they work though and maybe the accurate way to put it is that when the linker meets this function, it might actually have the ability to insert the exact binary corresponding to these functions: the exact details is a FFT: 

