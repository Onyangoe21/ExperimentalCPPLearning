
## What Really Are Header Files Doing?

Let’s take a moment to appreciate the genius behind C++. The language’s creator, Bjarne Stroustrup, was just like any other developer—he wouldn’t write code unless he had a good reason. So, why did he create header files? Could we technically write code without them? Sure, it’s possible, but it would be like trying to build a skyscraper with a hammer and nails—it’s doable, but you’d be in for a rough time and here is why: 

In the folder "without_header_files", I have made an attempt at writting the hello world program without using any headers -- remember, you are accessing the functionality of the standard library through headers and only specified by putting it in <>! I ended still having to use different much lower level header file because it is just impractical: When it comes to using them internally for the files we write by ourselves, there is a an example to show you why we need them if you compare the code in this folder with that in the with_header_files folder.


Header files have some clear advantages that you will get to explore more but play around with the code and suggest changes where you can!

At the end of the day, you’ve got two choices: copy and paste the code you need into every file that needs it, or use header files and keep your code clean and organized.
