//1.Find minimum and maximum number in array.

class MinMax{
public static void main(String[] args){

int [] arr = {10,20,30,4,2,1};
int max = arr[0];
int min = arr[0];
for(int i = 1;  i < arr.length; i++){
    if( arr[i] < min){
        min = arr[i];}
    if(arr[i] > max){
     max=arr[i];}

}//forlopp end
        System.out.println("Minimum = " + min);
        System.out.println("Maximum = " + max);








}}