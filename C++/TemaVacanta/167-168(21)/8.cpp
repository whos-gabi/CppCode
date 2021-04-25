#include <bits/stdc++.h>
//
using namespace std;
//
/* se citesc n nr naturale sa se afiseze nr care au cea mai mare suma a divizorilor proprii*/
int n, v[255], f;
void citire()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
    // cout<<"done reading \n";
}

int sumaDivPropr(int n)
{
    int d = 0, s = 0;
    for (d = 2; d <= n / 2; d++)
    {
        if (n % d == 0)
        {
            s+=d;
        }
    }
    return s;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (sumaDivPropr(arr[j]) > sumaDivPropr(arr[j+1]))
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
  
     if (swapped == false){
        break;
     }
   }
}



void prelucrare(int arr[],int n)
{
    //divizorii proprii
    //suma lor
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{

    citire();
    prelucrare(v,n);
    return 0;
}