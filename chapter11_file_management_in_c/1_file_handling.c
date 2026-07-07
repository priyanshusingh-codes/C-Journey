/*
What is a File?
A file is a collection of related data stored permanently on a secondary storage device (such as a hard disk or SSD).
Unlike variables, whose contents are lost when the program ends, data stored in files remains available until it is deleted.

Definition
A file is a named location on secondary storage used to store data permanently.




2. Why Do We Need Files?
Console input/output (scanf() and printf()) is suitable only for small amounts of data.


For large applications, file handling is required because:
Data is stored permanently.
Large amounts of data can be handled.
Data can be reused later.
Saves time by avoiding repeated input.
Makes data sharing easier.




Advantages
Permanent storage
Easy retrieval
Efficient handling of large data
Better organization
Data security





3. Types of Files in C
(A) Text File
Stores data as characters.
Human-readable.
Uses ASCII characters.
Easier to edit.

Example:


marks.txt
Contents
Rahul 90
Priya 85


(B) Binary File
Stores data in binary form.
Not human-readable.
Faster than text files.
Uses less memory.

Example
student.dat



4. Basic File Operations

C allows the following operations:
Creating a file
Opening a file
Reading data
Writing data
Appending data
Closing a file
Random access




5. FILE Pointer
C uses a special data type called FILE.
Every file must be accessed through a pointer of type FILE.



Syntax
FILE *fp;

Explanation
FILE is a predefined structure.
fp is a pointer to FILE.
It acts as a communication link between the program and the file.



6. Opening a File
Function Used
fopen()

Syntax
FILE *fp;
fp = fopen("filename","mode");

Example
FILE *fp;
fp = fopen("student.txt","r");



7. File Opening Modes

| Mode | Meaning       | File Exists         | File Doesn't Exist |
| ---- | ------------- | ------------------- | ------------------ |
| r    | Read          | Opens file          | Error              |
| w    | Write         | Deletes old data    | Creates new file   |
| a    | Append        | Adds data at end    | Creates file       |
| r+   | Read + Write  | Opens existing file | Error              |
| w+   | Read + Write  | Deletes contents    | Creates file       |
| a+   | Read + Append | Opens file          | Creates file       |




Mode "r"
fp = fopen("data.txt","r");
Purpose
Read only
File must already exist


Mode "w"
fp = fopen("data.txt","w");
Purpose
Write only
Creates new file
Deletes old contents



Mode "a"
fp = fopen("data.txt","a");
Purpose
Add data at end
Old contents remain safe

*/ /*

8. Closing a File
Function
fclose()
Syntax
fclose(fp);

Example
FILE *fp;
fp = fopen("test.txt","r");

 operations 
fclose(fp);
Why close a file?
Saves data properly
Frees memory
Prevents corruption
Makes file available to other programs



9. Character-Oriented File Functions
putc()



Writes one character.
Syntax
putc(character, fp);

Example
putc('A', fp);
getc()
Reads one character.

Syntax
ch = getc(fp);

Example
char ch;
ch = getc(fp);
End of File (EOF)
When the file ends,
getc()
returns
EOF



Example
while((ch=getc(fp))!=EOF)
{
    printf("%c",ch);
}




10. Integer-Oriented Functions
putw()
Writes an integer.
Syntax
putw(number,fp);
Example
putw(100,fp);



getw()
Reads an integer.
Syntax
num=getw(fp);



11. Formatted File Functions
These are similar to
printf()
scanf()
but operate on files.


fprintf()
Writes formatted data.
Syntax
fprintf(fp,"format",variables);

Example
fprintf(fp,"%s %d %.2f",name,age,salary);








fscanf()
Reads formatted data.
Syntax
fscanf(fp,"format",&variables);
Example
fscanf(fp,"%s %d",name,&age);




Difference Between printf() and fprintf()
printf()	      fprintf()
Screen output	File output




Difference Between scanf() and fscanf()
scanf()	                            fscanf()
Reads from keyboard	            Reads from file




12. Error Handling in Files
Errors may occur due to:
File not found
Wrong filename
Read after EOF
Write-protected file
File not opened




NULL Pointer Check
If file cannot open,
fopen()

returns
NULL

Example
fp=fopen("abc.txt","r");
if(fp==NULL)
{
    printf("Cannot open file");
}




13. feof()
Checks End Of File.

Syntax
feof(fp);
Returns
Non-zero → End reached
Zero → Data available

Example
if(feof(fp))
printf("End of File");




14. ferror()
Checks file errors.

Syntax
ferror(fp);
Returns
Non-zero → Error exists
Zero → No error





15. Random Access Functions
Allows access to any position in a file.

ftell()
Returns current position.
Syntax
long n;
n=ftell(fp);
rewind()
Moves pointer to beginning.

Syntax
rewind(fp);
fseek()



Moves pointer to desired location.

Syntax
fseek(fp,offset,position);
Position values
Value	Meaning
0	    Beginning
1	    Current position
2	    End of file


Example
Beginning
fseek(fp,0,0);
Move 10 bytes ahead
fseek(fp,10,0);
Last character
fseek(fp,-1L,2);




16. Command Line Arguments
Arguments passed while executing a program.

Example
program input.txt output.txt
Main function
int main(int argc,char *argv[])


argc
Counts arguments.

Example
program file1 file2
argc
3


argv
Stores argument strings.
argv[0] → program
argv[1] → file1
argv[2] → file2





17. Common File Programs
Create a File
FILE *fp;
fp=fopen("test.txt","w");
fclose(fp);
Write into File
FILE *fp;
fp=fopen("test.txt","w");
fprintf(fp,"Hello");

fclose(fp);
Read from File
FILE *fp;

char ch;
fp=fopen("test.txt","r");
while((ch=getc(fp))!=EOF)
printf("%c",ch);
fclose(fp);
Append Data
FILE *fp;
fp=fopen("test.txt","a");
fprintf(fp," World");
fclose(fp);






18. Common Errors
Forgetting to close file
Using wrong mode
Reading unopened file
Ignoring NULL pointer
Reading after EOF

*/