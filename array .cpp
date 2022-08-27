#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(Array arr)
{
    int i;
    cout << "Elements in array are:"<<endl;
    for(i = 0;i < 20; i++)
    {
        cout << arr.A[i] <<"\t";
    }
    cout << endl;
}
void Insert(Array *arr,int index,int data)
{   
    int i;
    if(index >= 0 && index <= arr->length)
    {
        for(i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = data;    
        arr->length++;
    }
}
void Delete(Array *arr, int index)
{
    int i;
    for(i = index;i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
}
void binSearch(Array *arr, int l, int h, int key)
{
    

    while (l <= h)
    {
        int mid = (l + h)/2;

        if(key == arr->A[mid])
        {
            cout << "Key found at " <<mid<<endl;
            return ;
        }
        else if(key < arr->A[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
        
    }
    cout <<"Key not found"<<endl;



}

int main() 
{
    Array arr = {{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},20,5};
    arr.length = 15;
    int l, h;
    binSearch( &arr, l = 0, h = arr.length - 1, 11);
    // Insert(&arr,4,99);
    // Delete(&arr,2);
    Display(arr);
    
    return 0;
}