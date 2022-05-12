import java.util.*;
class NextLargerElement {

	static int [] nextLargerElement(int arr[], int n) {

		
         int[] result = new int[n];

        for(int i = 0; i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    result[i]=arr[j];
                    break;
                }
                else
                {
                    result[i]=-1;
                }
            }
        }




        // int counter = 0;
        // Stack<Integer> s = new Stack<>();
        // //traverse the array for each element and write its ans in result
        // for(int i =0 ; i<n ; i++)
        // {
        //     if(s.isEmpty())
        //     {
        //         s.push(arr[i]);
        //     }
        //     //when current is greater than top
        //     else if(s.peek()<arr[i])
        //     {
        //         //write ans for all elements in stack in result as current and pop each 
        //         while(s.isEmpty()!=true)
        //         {
        //             result[counter] = arr[i];
        //             s.pop();
        //             counter++; 
        //         }
        //         s.push(arr[i]);
        //     } 
        //     //when current is smaller than top
        //     else if(s.peek()>arr[i])
        //     {
        //         //push current in stack
        //         s.push(arr[i]);
        //     }
        // }
        
        // while(s.isEmpty()!=true)
        // {
        // //when all elements are taversed 
        //     //write -1 for all remaining elemts in stack while poping
        //     s.pop();
        //     result[counter] = -1;
        //     counter++;
        // }

		return result;

	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ar[] = new int[n];
		for (int i = 0; i < n; i++) {
			ar[i] = sc.nextInt();
		}
		int [] ans = nextLargerElement(ar, n);
		for (int i = 0; i < ans.length; i++)
			System.out.print(ans[i] + " ");
	}
}
