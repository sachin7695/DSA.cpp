#include<iostream>
#include<iomanip>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;

};
void display(struct Array arr){
    int i=0;
    cout<<"\n elements are\n";
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
// void append(struct Array *arr,int x){
//     if(arr->length<arr->size){
//         arr->A[arr->length++]=x;
//     }
// }
// void insert(struct Array *arr,int index,int x){
//     int i;
//     if(index>=0&&index<=arr->length){
//         for(i=arr->length;i>index;i--){
//             arr->A[i]=arr->A[i-1];
//         }arr->A[index]=x;
//         arr->length++;
//     }
// }
// void Delete(struct Array *arr,int index){
//     int x=0;
//     if(index>=0&&index<=arr->length){
//         // x=arr->A[index];
//         for(int i=index;i<arr->length-1;i++){
//             arr->A[i]=arr->A[i+1];

//         }arr->length--;
//         // return x;
//     }
//     // return 0;

// }
// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int LinearSearch(struct Array *arr,int key){
//     int i=0;
//     for(i=0;i<(*arr).length;i++){
//         if(key==(*arr).A[i]){
//             swap(&arr->A[i],&arr->A[0]);
//             return i;
//         }
//     }
//     return -1;
// }
// int binser(struct Array *arr,int key ){
//     int l,h,mid;
//     l=0;
//     h=arr->length-1;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==arr->A[mid]) return mid;
//         else if(key<arr->A[mid]) h=mid-1;
//         else{
//             l=mid+1;
//         }
//     }return -1;
// }
// int rbinser(int *a,int l,int h,int key){
//     int mid=0;
//     if(l<=h){
//         mid=(l+h)/2;
//         if(key==a[mid]){
//             return mid;
//         }else if(key<a[mid]){
//             return rbinser(a,l,mid-1,key);
//         }else{
//             return rbinser(a,mid+1,h,key);
//         }
//     }
//     return -1;
// }
// int get(struct Array *arr,int index){
//     if(index>=0&&index< arr->length){
//         return arr->A[index];
//     }return -1;
// }
// int set(struct Array *arr,int index,int x){
//     if(index>=0&&index<arr->length){
//         return arr->A[index]=x;
//     }
//     return -1;
// }
// int max(struct Array *arr){
//     int max=arr->A[0];
//     int i;
//     for(i=1;i<arr->length;i++){
//         if(arr->A[i]>max){
//             max=arr->A[i];
//         }
//     }
//     return max;
// }
// int min(struct Array *arr){
//     int min=arr->A[0];
//     int i;
//     for(i=1;i<arr->length;i++){
//         if(arr->A[i]<min){
//             min=arr->A[i];
//         }
//     }
//     return min;
// }
// int sum(struct Array *arr){
//     int total=0;
//     int i;
//     for(i=0;i<arr->length;i++){
//         total+=arr->A[i];
//     }
//     return total;
// }
// float avg(struct Array *arr){
//     return (float)sum(arr)/arr->length;
// }
// int sum(int a[],int n){
//     if(n<0){
//         return 0;
//     }else{
//         return sum(a,n-1)+a[n];
//     }

// }
// void reverse(struct Array *arr){
//     int *b;
//     int i,j;
//     b=new int[sizeof(int)*arr->length];
//     for(i=arr->length-1,j=0;i=0;i--,j++){
//         b[j]=arr->A[i];
//     }
//     for(i=0;i<arr->length;i++){
//         arr->A[i]=b[i];
//     }
//     delete[] b;
// }
// void rev2(struct Array *arr){
//     int i,j;
//     for(i=0,j=arr->length-1;i<j;i++,j--){
//         swap(&arr->A[i],&arr->A[j]);
//     }
// }
// int issorted(struct Array *arr,int n){
//     for(int i=0;i<n-1;i++){
//         if(arr->A[i]> arr->A[i+1]){
//             cout<<"false"<<endl;
//         }else{
//             cout<<"true"<<endl;
//         }
//     }return 1;
// }
// struct Array *merge(struct Array *arr1,struct Array *arr2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=new struct Array[sizeof(struct Array)];
//     while(i<arr1->length&&j<arr2->length){
//         if(arr1->A[i]<arr2->A[j]){
//             arr3->A[k++]=arr1->A[i++];
//         }else{
//             arr3->A[k++]=arr2->A[j++];
//         }
//     }
//     for(;i<arr1->length;i++){
//         arr3->A[k++]=arr1->A[i++];
//     }
//     for(;j<arr2->length;j++){
//         arr3->A[k++]=arr2->A[j++];
//     }
//     arr3->length=arr1->length+arr2->length;
//     arr3->size=10;
//     return arr3;
// }
// struct Array *Union(struct Array *arr1,struct Array *arr2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=new struct Array[sizeof(struct Array)];
//     while(i<arr1->length&&j<arr2->length){
//         if(arr1->A[i]<arr2->A[j]){
//             arr3->A[k++]=arr1->A[i++];
//         }else if(arr1->A[i]> arr2->A[j]){
//             arr3->A[k++]=arr2->A[j++];
//         }else{
//             arr3->A[k++]=arr1->A[i++];
//             j++;
//         }
//     }
//     for(;i<arr1->length;i++){
//         arr3->A[k++]=arr1->A[i++];
//     }
//     for(;j<arr2->length;j++){
//         arr3->A[k++]=arr2->A[j++];
//     }
//     // arr3->length=arr1->length+arr2->length;
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }
// struct Array *Intersection(struct Array *arr1,struct Array *arr2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=new struct Array[sizeof(struct Array)];
//     while(i<arr1->length&&j<arr2->length){
//         if(arr1->A[i]<arr2->A[j]){
//             // arr3->A[k++]=arr1->A[i++];
//             i++;
//         }else if(arr1->A[i]> arr2->A[j]){
//             // arr3->A[k++]=arr2->A[j++];
//             j++;
//         }else if(arr1->A[i]==arr2->A[j]){
//             arr3->A[k++]=arr1->A[i++];
//             j++;
//         }
//     }
//     // for(;i<arr1->length;i++){
//     //     arr3->A[k++]=arr1->A[i++];
//     // }
//     // for(;j<arr2->length;j++){
//     //     arr3->A[k++]=arr2->A[j++];
//     // }
//     // arr3->length=arr1->length+arr2->length;
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }
// struct Array *difference(struct Array *arr1,struct Array *arr2){
//     int i,j,k;
//     i=j=k=0;
//     struct Array *arr3=new struct Array[sizeof(struct Array)];
//     while(i<arr1->length&&j<arr2->length){
//         if(arr1->A[i]<arr2->A[j]){
//             arr3->A[k++]=arr1->A[i++];
//             // i++;
//         }else if(arr1->A[i]> arr2->A[j]){
//             // arr3->A[k++]=arr2->A[j++];
//             j++;
//         }else if(arr1->A[i]==arr2->A[j]){
//             // arr3->A[k++]=arr1->A[i++];
//             j++;
//             i++;
//         }
//     }
//     for(;i<arr1->length;i++){
//         arr3->A[k++]=arr1->A[i++];
//     }
//     // for(;j<arr2->length;j++){
//     //     arr3->A[k++]=arr2->A[j++];
//     // }
//     // arr3->length=arr1->length+arr2->length;
//     arr3->length=k;
//     arr3->size=10;
//     return arr3;
// }
int main()
{
    // struct Array arr={{2,3,9,1,18,21,28,32,35},10,9};
    struct Array arr1={{2,9,21,28,35},10,5};
    struct Array arr2={{2,3,16,18,28},10,5};
    struct Array *arr3;
    // arr3=difference(&arr1,&arr2);
    display(*arr3);
    // cout<<binser(&arr,16)<<endl;
    // cout<<rbinser(arr.A,0,8,18);
    // append(&arr,10);
    // insert(&arr,5,89 );
    // Delete(&arr,4);
    // cout<<"Linear search "<<LinearSearch(&arr,4)<<endl;
    // display(arr);
    // cout<<get(&arr,4)<<endl;
    // cout<<set(&arr,4,67)<<endl;
    // cout<<max(&arr)<<endl;
    // cout<<min(&arr)<<endl;
    // cout<<sum(&arr)<<endl;
    // cout<<fixed<<setprecision(2)<<avg(&arr)<<endl;
    // cout<<avg(&arr)<<endl;
    // reverse(&arr);
    // reverse(&arr);
    // display(&arr);
    // cout<<issorted(&arr,8);
    
    // cout<<sum(arr.A,arr.length-1);


    // cout<<arr.length;
    return 0;
}
