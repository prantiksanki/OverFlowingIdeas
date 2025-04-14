
#include<iostream>
using namespace std ;

int main ()
{
    int t  ;
    cin >> t  ;
    int totFace = 0 ;
    while(t--)
    {
        string it ;
        cin >> it ;
        if(it == "Tetrahedron")
        {
            totFace += 4 ;
        }
        else if(it == "Cube")
        {
            totFace += 6 ;
        }
         else if(it == "Octahedron")
        {
            totFace += 8 ;
        }
        else if(it == "Dodecahedron")
        {
            totFace += 12 ;
        }
        else if(it == "Icosahedron")
        {
            totFace += 20 ;
        }
    }

    cout << totFace << endl ;
}
