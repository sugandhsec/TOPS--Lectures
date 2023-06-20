/*
file pointer
FILE *filepointername;
FILE *fp;

file open
filepointername =fopen("filename","mode")
fp=fopen("demo.txt","r")

modes---
read---r----if file exist then it open for reading purpose and if file not exist then it gives error

write----w----if file exist then it open for writing and all old content will be deleted and if file not exist then it create anew file but not gives error

append---a---if file exist then it open for append and all old content will not be deleted and if file not exist then it create anew file but not gives error



file working read,write,append




file close
fclose(filepointername);
fclose(fp);


*/