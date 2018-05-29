
#include <iostream>

#include<string>

//#include<iterator>

#include<algorithm>
//#include <functional>
using namespace std;

int main11()
{
  string s1= "abcdefg";
try{
    for(int i = 0;i<s1.length()+3;i++){

        cout<<s1[i]<<" ";

    }
    cout<<endl;
}
 catch(...){


        cout<<"error1"<<endl;

  }


    for(string::iterator it=s1.begin();it!=s1.end();it++){


                    cout<<*it<<"";


  }
    cout<<endl;


    try{

    for(int i= 0;i<s1.length()+3;i++){

        cout<<s1.at(i)<<"";//抛出异常。

    }
    cout<<endl;

    }

    catch(...){

        cout<<"error2\n";

    }


    return 0;
}
//字符指针和string的转换
void main23(){

    string s1 = "aaa";

    //1 s1==>char *

    printf("s1:%s\n",s1.c_str());
    //2 char*====>string


    //3  s1的内容copy buf中
    char buf1[128];

    s1.copy(buf1,3,0);//从0拷贝到3;不会变成c风格的字符串。

     cout<<"buf1:"<<buf1<<endl;
}
void main24(){

    //用+号链接
    string s1 ="aaa";

    string s2 ="bbbb";

    s1 = s1+s2;

    cout<<s1<<endl;
    //用append连接。

    string s3 = "3333";

    string s4 ="555";

    s3.append(s4);

    cout<<"s3:"<<s3<<endl;

}

//字符串的查找和替换。

void main25(){


    string s1 = "who hell wbo wbodddd wbo";

    int index = s1.find("wbo",0);

    cout<<"index:"<<index<<endl;
    //求wbo出现的次数，每一次出现的数组下标。

    int offindex = s1.find("wbo",0);

    while(offindex !=string::npos){

        cout<<"offindex:"<<offindex<<endl;

        offindex = offindex +1;

        offindex = s1.find("wbo",offindex);
    }

   //案例2把小写wbo换成大写的WBO.

    offindex = s1.find("wbo",0);

    while(offindex !=string::npos){

        cout<<"offindex:"<<offindex<<endl;

        s1.replace(offindex,3,"MBO");

        offindex = offindex +1;

        offindex = s1.find("wbo",offindex);
    }
        cout<<"s1替换后的结果："<<s1<<endl;
}

//字符串的截断（区间删除）和插入
/*D:\QT1\Tools\QtCreator\bin\0528\main.cpp:144: error: no matching function for call to 'find(std::basic_string<char>::iterator, std::basic_string<char>::iterator, char)'
  string::iterator it = find(s1.begin(),s1.end(),'l');
                                                    ^*/
void main26(){

 string s1 = "hello1 1hello2 hello3";
 string::iterator it = find(s1.begin(),s1.end(),'l');//要引入算法。#include<algorithm>

    if(it!=s1.end()){

        s1.erase(it);

    }

   cout<<"s1 delete: "<<s1<<endl;

 //  s1.erase(s1.begin(),s1.end());全部删除。

   cout<<"s1 erase:"<<s1<<endl;

   cout<<"s1 is length()"<<s1.length()<<endl;

   string s2 ="bbb";

   s2.insert(0,"aa");//头插法
    s2.insert(s2.length(),"aadddd");//尾插法。

   cout<<"s2:"<<s2<<endl;


}
void main27(){

    string s1 = "aaaadffdd";
    //1 函数的入口地址2.函数对象，3.预定义的函数对象。
    string s3 = "aaaaaaaaa";

    transform(s1.begin(),s1.end(),s1.begin(),::toupper);//在QT中需要加::

    cout<<"s1"<<s1<<endl;

    string s2 = "aDDDDDD";

    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    cout<<"s2: "<<s2<<endl;






}




int main(){

   //main23();

   // main24();

  //  main25();

   // main26();

    main27();

    return 0;
}


