#include<stream>


using namespace std;


class Solution{
	public:
		ListNode * addTwoNumbers(ListNode *l1, ListNode *l2)
		{
			int x=y=z=0;

			ListNode * h=NULL, *t=NULL;


			while(l1!=NULL || l2!= NULL)
			{
				x=getValueAndMoveNext(&l1);
				y=getValueAndMoveNext(&l2);

				z = z+x+y;

				ListNode * node=new ListNode(z%10)

				if(h==NULL)
				{
					h = t = node;
				}
				else
				{
					t->next = node;
					t = node;
				}

				z = z / 10;


				while(z>0)
				{
					ListNode * node = new ListNode(z%10);o
						t->next = node;

					z = z  / 10;
				}

			}
			
			return h;
		}



	private:
		int getValueAndMoveNext(ListNode ** l)
		{
			int x = 0;

			if ((*l) != NULL)
			{
				x = (*l)->val;
				(*l) = (*l)->next;
			}


			return x;
		}
};
