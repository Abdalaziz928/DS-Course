#include<iostream>
using namespace std;

class Array
{
    private:
        int size;
        int length;
        int *items;

    public:
        Array(int arrsize)
        {
            size = arrsize;
            length = 0;
            items = new int[arrsize];
        }
        // operations
            // Fill
            // Display
            // getlength
            // getsize 
            // Append
            // insert 
            // search 
            // sort 
            // Enlarge 
            // Merge 
            //===============================================
            //========  Operations  =======
        void  Fill()
            {
                // Ask user how many number of items you want fill 
                // verifying do number of items deal with size of array 
                // create variable called no_of_items type integer 
                int no_of_items;
                cout<<"how many number of items you want to fill ?"<<endl;
                cin>> no_of_items;
                // validation 
                if(no_of_items > size)
                {
                    cout<<"Your number of items is not exceed";
                    return;
                }
                else
                {
                    for(int i = 0; i < no_of_items;i++)
                    {
                        
                        cout<<"Enter items number"<<i<<endl;
                        cin>>items[i];
                        length++;
                    }
                }
            }
            void Display()
            {
                cout<<"The content of array is "<<endl;
                for(int i=0;i < length;i++)
                {
                    
                    cout<<items[i]<<"\t";
                    
                }
                cout<< endl;
            }
            int getLength()
            {
                return length;
            }
            int getSize()
            {
                return size;
            }

            // =================== search( ) ============

            int search(int key)
            {
                int index = -1;
                for (int i = 0; i <length;i++)
                {
                    if(items[i] == key)
                    {
                        index = i;
                    }
                   
                }
                return index;
            }  

            // Append method add new item in the end of array 
            // We need to increase the size of the array so that there is an empty place to add the new item
            // First, check whether there is an empty place or not
            // if empty place is exsisted then add new item directly 
            // else incrase the size of array + 1
            void Append(int newitem)
            {
                if (size > length)
                {
                    items[length] = newitem;
                    length++;
                }
                else
                {
                    cout << "Array is full"<<endl;
                }
            } 
            // ================== insert() ===============
            void Insert(int newitem,int index)
            {
                // validation on input
                if (index >= 0 && index < size)
                {
                    for(int i = length; i > index; i--)
                    {
                        items[i] = items[i-1];
                    }
                    items[index] = newitem;
                    length++;
                }
                else{
                    cout<<"your index is out of range\n";
                }
            }
            // =============== Delete() ================
            void Delete(int index)
            {
                if (index >= 0 && index < size)
                {
                    for (int i = index; i < length-1   ; i++)
                    {
                        items[i] = items[i+1];
                    }
                    length--;
                    
                }
                else
                {
                    cout<<"your index is not found";
                }
                
            }
            // ============= Enlarge() =============
            void Enlarge(int newsize)
            {
                if (newsize <=size)
                {
                    cout<<"New size must be larger than current size";
                }
                else
                {
                    // change old size to new size
                    size = newsize;
                    // intialize new pointer to refer to old array and access on items in old array
                    int *old = items;
                    // intialize new array with new size
                    items = new int[newsize];
                    // Copy old items of old array to new array
                    for (int i = 0; i < length; i++)
                    {
                        items[i] = old[i];
                    }
                    // since the array is constracted in heap part of memory then we need delete it from heap
                    delete[]old;
                    
                }
                
            }

            // ============ Marge() ============
            // marge function is take array as input and marge it with old array in new array
            // Array is name of class
            // other is object from this class 
            // then it can take all attributes and methods
            // size of new array is sumtion of both size of old array and other array
            void Marge(Array other)
            {
                // intialize variable called newsize to store the newsize of new array
                int newsize = size + other.getSize();
                // must change the old size to newsize
                size = newsize;
                // intialize new pointer called old to access on old array (items pointer)
                int *old = items;
                // intialize new array 
                items = new int[newsize];
                // declaration i as varible hold the carrent postion to add items of other array after it
                int i;
                // Add the items of old array in new array
                for (i = 0; i < length; i++)
                {
                    items[i] = old[i];
                }
                // must delete old 
                delete[]old;
                // declare j as variable to hold the last index of old array in new array
                int j = i;
                // Add the items of other array in new array
                for (int i = 0; i < other.getLength(); i++)
                {

                    // items is the new array
                    items[j++] = other.items[i];
                    // incrase the length;
                    length++;
                }
                
                
            }

            
 
};
int main()
{
    // Create object have a same name fo class
    int Arrsize;
    cout<<"This is methods of array "<<endl;
    cout<<"How size of array you want "<<endl;
    cin >>Arrsize;
    Array myarray(Arrsize);
    myarray.Fill();
    cout<<"The containt of array is :"<<endl;
    myarray.Display();
    // myarray.Display();

    //This it the length of array is 
    // int length;
    // length = myarray.getLength();
    // cout <<"The length of array is:  "<<length<<endl;
    // cout <<"\n\n\n";
    // This is the size of array
    // int size;
    // size = myarray.getSize();
    // cout << "The size of array if : "<< size <<endl;

    // ============== search() ===============

    // int key;
    // cout<<"Enter your key";

    // cin>>key;

    // int index = myarray.search(key);

    // if (index != -1)
    // {
    //     cout<<"your key is exsit in index"<<index<<endl;
    // }
    // else
    // {
    //     cout<<"your key is not found";
    // }
    // ============ Append() =============
    // int newitems;
    // cout<<"Enter newitem";
    // cin>>newitems;
    // myarray.Append(newitems);
    // myarray.Display();

    // ============ insert ================ 
    // int newitemtoinsert;
    // int index;
    // cout<<"Enter insrted item : ";
    // cin>>newitemtoinsert;
    // cout<<"Enter index : ";
    // cin>>index;
    // myarray.Insert(newitemtoinsert,index);
    // myarray.Display();


    // ============ Delete() ==========
    // cout<<"Enter your deleted items"<<endl;
    // int index;
    // cin>>index;

    // myarray.Delete(index);

    // myarray.Display();

    // ============ Enlarge =============
    // cout<<"Enter new size";
    // int newsize;
    // cin>>newsize;
    // myarray.Enlarge(newsize);
    // cout<<"Array size"<<myarray.getSize()<<"\twhile length = "<<myarray.getLength()<<"\n";
    // // =============== make Display ======
    // // Too check that all items of old array are moved to new array
    // myarray.Display();

    // =========== Marge() ========
    int othersize;
    cout<<"This is methods of array "<<endl;
    cout<<"How size of array you want "<<endl;
    cin >>othersize;
    Array others(othersize);
    others.Fill();
    cout<<"The containt of array is :"<<endl;
    others.Display();
    myarray.Marge(others);
    cout<<"Array size"<<myarray.getSize()<<"\twhile length = "<<myarray.getLength()<<"\n";
    myarray.Display();





    
    



     
}