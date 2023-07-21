#include<iostream>
using namespace std;
int main()
{
for( int i = 1; i <= 10; i++ )

{
for( int j = 1; j <= 10; j++)
{
cout << (j <= i ? "*" : " " ) ;
}c
out << endl;
}
//for pause
system("PAUSE") ;
return 0;
}

b)

#include<iostream>
using namespace std;
int main()
{
for( int i = 10; i >= 1; i-- )
{
for( int j = 1; j <= 10; j++)
{
cout << (j <= i ? "*" : " " ) ;
}
cout << endl;
}

system("PAUSE") ;
return 0;
}

c)

#include<iostream>
using namespace std;
int main()
{
for( int i = 10; i > 0; i-- )
{
for( int j = 10; j > 0; j--)
{
cout << (j <= i ? "*" : " " ) ;
}c
out << endl;
}
//for pause
system("PAUSE") ;
return 0;
}

d)

#include<iostream>
using namespace std;
int main()
{
for( int i = 1; i <= 10; i++ )
{
for( int j = 10; j >= 1; j--)
{
cout << (j <= i ? "*" : " " ) ;
}c
out << endl;
}
//for pause
system("PAUSE") ;
return 0;
}

