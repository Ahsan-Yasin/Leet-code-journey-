//#include <iostream> 
//using namespace std; 
//struct node
//{
//	int data; 
//	node* next; 
//	node(int val) 
//
//	{
//		data = val; 
//		next = NULL;  
//	} 
//	~node()
//	{
//		delete next; 
//		next = NULL; 
//	}
// 
//};
//class LinkedLsit
//{
//	
//public:
//	node* head;  
//	LinkedLsit()
//	{ 
//		head = NULL; 
//	} 
//	~LinkedLsit()
//	{
//		delete head; 
//		head = NULL;
//	}
//	void insert(int val)
//	{
//		if (!head)
//		{
//			head = new node(val);
//		}
//		else
//		{
//			node* temp = head; 
//			while (temp->next)
//			{
//				temp = temp->next; 
//			}
//			node* NewNode = new node(val); 
//			temp->next = NewNode; 
//		}
//	} 
//	node* MergeSort(node*head)
//	{  
//		if (!head || !head->next)
//			return head ; 
//		node* temp = head;  
//		node* middle = getMiddle(head);
//		node* middleNxt = middle->next;  
//		middle->next = NULL; 
//		node *left= MergeSort(head );  
//		node* right = MergeSort(middleNxt); 
//		return Merge(left, right); 
//    } 
//	node* Merge(node* left, node* right)
//	{
//		if (!left)
//		{
//			return right; 
//		}
//		 if (!right)  
//		{
//			return left  ;
//		}
//		if (left->data <= right->data)
//		{
//			left->next = Merge(left->next, right); 
//			return left; 
//		} 
//		else
//		{
//			right->next = Merge(left, right->next); 
//			return right;
//		}
//	}
//	node* getMiddle(node*head)
//	{ 
//		if (!head) 
//			return head; 
//		node* slow = head; 
//		node* fast = head;
//		while (fast->next && fast->next->next)
//		{
//			slow = slow->next; 
//			fast = fast->next->next;
//		} 
//		return slow; 
//	} 
//	void sort()
//	{
//		head = MergeSort(head); 
//	}
//	void print()
//	{
//		node* temp = head;
//		while (temp)
//		{
//			cout << temp->data << "->";
//			temp = temp->next; 
//		 }
//		cout <<"NULL" << endl;
//	} 
//	
//};  
//
//class Solution
//{
//private: 
//	//int** ptr;   
//	//const int n = 3; 
//	//int List[3][3] = { {1,2,3},{3,4,5},{5,7,8} }; 
//public:  
//	Solution()
//	{
//	//	ptr = NULL; 
//	}
//	 
//	void putInArray(int**arr, int rows,int  columns, LinkedLsit head[])
//	{
//		for (int i = 0; i < rows; i++) 
//		{  
//			for (int j = 0; j < columns; j++)
//			{
//				head[i].insert(arr[i][j]); 
//			 } 
//		}
//	}
//	void merge(int **&arr,int rows, int columns)
//	{ 
//		LinkedLsit*lst=new LinkedLsit[rows] ;
//		LinkedLsit FinalList;
//		node* temp; 
//		bool flag = true;  
//		putInArray(arr, rows, columns, lst); 
//		//now we will merge the k linked list 
//		for (int i = 0; i < rows; i++)
//		{    
//			temp = lst[i].head;  
//			while (temp) 
//			{
//				FinalList.insert(temp->data);  
//				temp = temp->next; 
//			 }
//			
//		}  
//		FinalList.sort(); 
//		FinalList.print(); 
//	}  
//	
//};
//void allocate_memory(int** &ptr,int size,int lst)
//{
//
//	ptr = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//
//		ptr[i] = new int[lst];
//		 
//	} 
//	for (int i = 0; i < size; i++)
//
//	{
//		cout << "Enter values for linked list " << i << " : "; 
//		for (int j = 0; j < lst; j++)
//		{
//			cin >> ptr[i][j]; 
//		}
//	}
//} 
//	
//int main()  
//{
//	Solution obj;
//	const int rows = 3;  
//	const int columns = 3; 
//	int** arr=NULL;  
//	allocate_memory(arr,rows,columns); 
//	
//	obj.merge(arr, 3, 3);
//
//
//	    
//
//} 