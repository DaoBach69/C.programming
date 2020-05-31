#include <stdio.h>
struct cust_st
{
	int acc_no;
	char cust_nm[30];
	float bal;
};
struct tran_st
{
	int acc_no;
	char trantype;
	float amt;
};

int main()
{
	int choice=1;
	while(choice!=4)
	{
		printf("\nSelect choice from menu\n\n 1. Accept customer details\n 
		2. Record withdrawl/Deposit transaction\n 3. Print low balance report\n
		4. Exit\n\n Enter choice: ");
		
		scanf("%d", &choice);
		if(choice==1)
			addcust();
		else if(choice==2)
			rectran();
		else if(choice==3)
			prnlowbal();
	}
return 0;
}

addcust()
{
	FILE *fp;
	char flag='y';
	struct cust_st custdata;
	if((fp=fopen("customer", "a+")))==NULL
	{
		printf("\nError opening customer file");
		return;
	}
	while(flag=='y')
	{
		printf("\n\nEnter account number: ");
		scanf("%d", &custdata.acc_no);
		printf("\nEnter customer name: ");
		scanf("%s", custdata.cust_nm);
		printf("\nEnter account balance: ");
		scanf("%f", &custdata.bal);
		fwrite(&custdata, sizeof(struct cust_st), 1, fp);
		printf("\n\nAdd another? (y/n): ");
		scanf("%c", &flag);
	}
	fclose(fp);
}

rectran()
{
	FILE *fpl, *fp2;
	char flag='y', found, var_flag;
	struct cust_st custdata;
	struct tran_st trandata;
	int size = sizeof(struct cust_st);
	if((fp;=fopen("customer", "r+w"))==NULL)
	{
		printf("\nError opening customer file");
		return;
	}
	if((fp2=fpen("trans", "a+"))==NULL)
	{
		printf("\nError opening transaction file");
		return;
	}
	while(flag=='y')
	{
		printf("\n\nEnter account number: ");
		scanf("%d", &trandata.acc_no);
		int accno = trandata.acc_no;
		rewind(fpl);
		while((fread(&custdata, sizeof(struct cust_st), 1, fpl))==1)
	{
		if(custdata.acc_no = accno)
		{
			found = 'y';
			break;
			//printf("\n%d\t%s.2f", custdata.acc_no, custdata.cust_nm, custdata.bal);
			
		}
	}
	//found = 'n';
	val_flag='n';
	
	if(found=='y')
	{
		while(val_flag=='n')
		{
			printf("\Enter transaction (D/W): ");
			scanf("%c", &trandata.trantype);
			if(trandata.trantype!='D' && trandata.trantype!='d' &&
			trandata.trantype!='W' && trandata!='w')
			printf("\t\tInvalid transaction type, please reenter");
			
			else
				val_flag='y';
		}
				val_flag='n';
			while(val_flag=='n')
			{
				printf("\nEnter amount: ");
				scanf("%f", &trandata.amt);
				if(trandata.trantype =='W' || trandata.trantype=='w')
				{
					if(trandata.amt > custdata.bal)
					printf("\nAccount balance is %.2f. Please reenter withdrawal amount.", custdata.bal);
					else
					{
						custdata.bal-=trandata.amt;
						val_flag='y';
					}
				}
				else
				{
					custdata.bal+=trandata.amt;
					val_flag='y';
				}
			}
			fwrite(&trandata, sizeof(struct tran_st), l, fp2);
			fseek(fpl, (long)(-size), l);
			fwrite(&custdata, size, l, fpl);
	}
	else
	printf("\nThis account number does not exist");
	printf("\nRecord another transaction? (y/n): ");
	scanf("%c", &flag);
	
	}
	fclose(fp1);
	fclose(fp2);
}
	prnlowbal()
	
{
	FILE *fp;
	struct cust_st custdata;
	char flag='n';
	if((fp=fopen("customer", "r")))==NULL)
	{
		printf("\nError openning customer file");
		return;
	}
	printf("\nReport on account balance below 250\n\n");
	while((fread(&custdata, sizeof(struct cust_st), l, fp)))==l
	{
		if(custdata.bal < 250)
		{
			flag='y';
			printf("\n%d\t%s\t%.2f", custdata.acc_no, custdata.cust_nm, custdata.bal);
			
		}
	}
	if(flag=='n')
	printf("\nNo account balance found below 250");
	
	fclose(fp);
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
