#include<stdio.h>
#include<conio.h>

int main()
{
	char bpagain,mchoice,oa;
	int i,tot_bill;
	int papad = 0, mpapad = 0, apapad = 0, hpapad = 0, kmpapad = 0, pchoice, pbill=0, pquantity;
	int bbill = 0, abhaji = 0, dbhaji = 0, pbhaji = 0, bbhaji = 0, kbhaji = 0, bquantity, bchoice;
	int rbill=0, chapati = 0, bhakari = 0, tandoor = 0, bajari = 0, puri = 0, rquantity, rchoice;
	int ribill=0 ,rice = 0, mrice = 0, jrice = 0, khichadi=0, pulav = 0, riquantity, richoice;
	int cbill =0,cocacola = 0, sprite = 0, thumps = 0, deo = 0, maza = 0, cquantity, cchoice;


	// clrscr();
	// (6+BLINK);
	// textbackground(WHITE);
	printf("                               \3 Baba Ka Dhaba \3                                ");
	printf("\n");
	printf("________________________________________________________________________________");
	for (i=1;i<=3;i++)
   {
	(2);
	printf("\n \6 Menu of hotel \5 \n");
	printf("\n");
	printf("________________________________________________________________________________");
	printf("Choose your order by pressing character.\n\n");
	printf("a.Menu of Papad\n");
	printf("b.Menu of Bhaji\n");
	printf("c.Menu of Roti \n");
	printf("d.Menu of Rice \n");
	printf("e.Menu of Coldrinks\n");
	scanf("%s", &mchoice);
	printf("\n\n");

	switch (mchoice)
	{

	case 'a':
		for (i = 1; i <= 5; i++)
		{
			printf("Choose your order\n");
			printf("1.Papad rs.20\n");
			printf("2.Masala Papad rs.40\n");
			printf("3.Aloo Papad rs.15\n");
			printf("4.Kali Mirch Papad rs.35\n");
			printf("5.Hing Papad rs.45\n");
			scanf("%d", &pchoice);
			printf("Enter your quantity:");
			if (pchoice == 1)
			{
				scanf("%d", &pquantity);
				papad = 20;
				papad = papad * pquantity;
			}
			else if (pchoice == 2)
			{
				scanf("%d", &pquantity);
				mpapad = 40;
				mpapad = mpapad * pquantity;
			}
			else if (pchoice == 3)
			{
				scanf("%d", &pquantity);
				apapad = 15;
				apapad = apapad * pquantity;
			}
			else if (pchoice == 4)
			{
				scanf("%d", &pquantity);
				kmpapad = 35;
				kmpapad = kmpapad * pquantity;
			}
			else if (pchoice == 5)
			{
				scanf("%d", &pquantity);
				hpapad = 45;
				hpapad = hpapad * pquantity;
			}

			pbill = papad + apapad + mpapad + kmpapad + hpapad;

			printf("\nBill of papad= %d \n\n", pbill);
			printf("\nDo you want to order again papad (yes=y, no=n): ");
			scanf("%s", &bpagain);
			if (bpagain == 'n')
			{
				break;
			}
		}
	printf("\n\n\n");
	break;
	case 'b':

		for (i = 1; i <= 5; i++)
		{
			printf("Choose your order\n");
			printf("1.Aloo Bhaji rs.80\n");
			printf("2.Dal fry rs.85\n");
			printf("3.Panner rs.100\n");
			printf("4.Baingan rs.70\n");
			printf("5.Kaju kari rs.110\n");
			scanf("%d", &bchoice);
			printf("Enter your quantity:");

			if (bchoice == 1)
			{
				scanf("%d", &bquantity);
				abhaji = 80;
				abhaji = abhaji * bquantity;
			}
			else if (bchoice == 2)
			{
				scanf("%d", &bquantity);
				dbhaji = 85;
				dbhaji = dbhaji * bquantity;
			}
			else if (bchoice == 3)
			{
				scanf("%d", &bquantity);
				pbhaji = 100;
				pbhaji = pbhaji * bquantity;
			}

			else if (bchoice == 4)
			{
				scanf("%d", &bquantity);
				bbhaji = 70;
				bbhaji = bbhaji * bquantity;
			}

			else if (bchoice == 5)
			{
				scanf("%d", &bquantity);
				kbhaji = 110;
				kbhaji = kbhaji * bquantity;
			}

			bbill = abhaji + dbhaji + pbhaji + bbhaji + kbhaji;

			printf("\nBill of bhaji= %d \n", bbill);
			printf("\nDo you want to order again Bhaji (yes=y, no=n): ");
			scanf("%s", &bpagain);
			if (bpagain == 'n')
			{
				break;
			}
		}
	printf("\n\n\n");
	break;
	case 'c':
	  for (i = 1; i <= 5; i++)
		{
			printf("Choose your order\n");
			printf("1.Chapati rs.15\n");
			printf("2.Bhakari rs.20\n");
			printf("3.Tandoor rs.10\n");
			printf("4.Bajari rs.10\n");
			printf("5.Puri rs.20\n");
			scanf("%d", &rchoice);
			printf("Enter your quantity:");

			if (rchoice == 1)
			{
				scanf("%d", &rquantity);
				chapati = 15;
				chapati = chapati * rquantity;
			}
			else if (rchoice == 2)
			{
				scanf("%d", &rquantity);
				bhakari = 20;
				bhakari = bhakari * rquantity;
			}
			else if (rchoice == 3)
			{
				scanf("%d", &rquantity);
				tandoor = 10;
				tandoor = tandoor * rquantity;
			}

			else if (rchoice == 4)
			{
				scanf("%d", &rquantity);
				bajari = 10;
				bajari = bajari * rquantity;
			}

			else if (rchoice == 5)
			{
				scanf("%d", &rquantity);
				puri = 20;
				puri = puri * rquantity;
			}

			rbill = chapati + bajari + bhakari + puri + tandoor;

			printf("\nBill of Roti= %d \n", rbill);
			printf("\nDo you want to order again Roti (yes=y, no=n): ");
			scanf("%s", &bpagain);
			if (bpagain == 'n')
			{
				break;
			}
		}
	printf("\n\n\n");
	break;
	case 'd':
	  for (i = 1; i <= 5; i++)
		{
			printf("Choose your order\n");
			printf("1.Rice rs.60\n");
			printf("2.Masala Rice rs.70\n");
			printf("3.Jira Rice rs.80\n");
			printf("4.Khichadi rs.55\n");
			printf("5.Pulav rs.65\n");
			scanf("%d", &richoice);
			printf("Enter your quantity:");

			if (richoice == 1)
			{
				scanf("%d", &riquantity);
				rice = 60;
				rice = rice * riquantity;
			}
			else if (richoice == 2)
			{
				scanf("%d", &riquantity);
				mrice = 70;
				mrice = mrice * riquantity;
			}
			else if (richoice == 3)
			{
				scanf("%d", &riquantity);
				jrice = 80;
				jrice = jrice * riquantity;
			}

			else if (richoice == 4)
			{
				scanf("%d", &riquantity);
				khichadi = 55;
				khichadi = khichadi * riquantity;
			}

			else if (richoice == 5)
			{
				scanf("%d", &riquantity);
				pulav = 65;
				pulav = pulav * riquantity;
			}

			ribill = rice + mrice + jrice + pulav + khichadi;

			printf("\nBill of Rice= %d \n", ribill);
			printf("\nDo you want to order again Rice (yes=y, no=n): ");
			scanf("%s", &bpagain);
			if (bpagain == 'n')
			{
				break;
			}
		}
	printf("\n\n\n");
	break;
	case 'e':
	  for (i = 1; i <= 5; i++)
		{
			printf("Choose your order\n");
			printf("1.Cocacola rs.20\n");
			printf("2.Sprite rs.25\n");
			printf("3.Thumps up rs.30\n");
			printf("4.Mountain Deo rs.25\n");
			printf("5.Maza rs.40\n");
			scanf("%d", &cchoice);
			printf("Enter your quantity:");

			if (cchoice == 1)
			{
				scanf("%d", &cquantity);
				cocacola = 20;
				cocacola = cocacola * cquantity;
			}
			else if (cchoice == 2)
			{
				scanf("%d", &cquantity);
				sprite = 25;
				sprite = sprite * cquantity;
			}
			else if (cchoice == 3)
			{
				scanf("%d", &cquantity);
				thumps = 30;
				thumps = thumps * cquantity;
			}

			else if (cchoice== 4)
			{
				scanf("%d", &cquantity);
				deo = 25;
				deo = deo * cquantity;
			}

			else if (cchoice == 5)
			{
				scanf("%d", &cquantity);
				maza = 40;
				maza = maza * cquantity;
			}

			cbill = cocacola + thumps + sprite + deo + maza;

			printf("\nBill of Coldrinks= %d \n", cbill);
			printf("\nDo you want to order again papad (yes=y, no=n): ");
			scanf("%s", &bpagain);
			if (bpagain == 'n')
			{
				break;
			}
		}
		break;

		default:
		printf("\nEnter correct input: ");

  }
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");

	printf("Your bill: \n\n Papad= %d \n Bhaji = %d \n Roti = %d \n Rice = %d \n Coldrinks =%d ",pbill,bbill,rbill,ribill,cbill);
	tot_bill= pbill + cbill + rbill + ribill +bbill;
	// (2);
	printf("\n                 Total Bill= %d     ",tot_bill);

	printf("\n\nIf you want to check menu again press y else press n: ");
	scanf("%s",&oa);
	if (oa=='n')
		break;
  }

	printf("\n\n\n");
	// (1+BLINK);
	printf("                           \3 Thank You! For visit . \2                          ");




//  getch();

}
