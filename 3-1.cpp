#include<stdio.h>

/*
�i���D����j
�u�q�O�_���|�i�H�ζ}�ϩM��������m�ӧP�_�A�æ��H�U�i�બ�p�G
1. �u�q1�}�Y<=�u�q2�}�Y�A�B�u�q1����>=�u�q2���� => �u�q1�]�t�u�q2
2. �u�q1�}�Y<�u�q2�}�Y�A�B�u�q1����<�u�q2���� => �u�q1�������|�u�q2�B�u�q1�b�e
3. �u�q1����<�u�q2�}�Y => �u�q1�����|�u�q2�B�u�q1�b�e

���F��K�B�z�A�i�H���ǥѽu�q�}�Y�i��ƦC�A���ۥu�ݭn�P�_�}�Y�b�e�u�q�M�b��u�q���Y
*/

int main()
{
    int n=0;
    int line[10000][2]={{0}};

    scanf(" %d",&n);

    //��o�u�q�åѶ}�l���I�y�жi��Ƨ�
    for(int i=0;i<n;++i)
    {
        scanf(" %d %d",&line[i][0],&line[i][1]);

        for(int j=0;j<i;++j)
        {
            //�p�G���}�Y����o�u�q�j�h���J�b��e
            //�Y�S�o�{�h���Ҧ��u�q����
            if(line[i][0]<line[j][0])
            {
                int temp[2]={line[i][0],line[i][1]};
                //�N�u�q���ᮿ��
                for(int k=i;k>j;--k)
                {
                    line[k][0]=line[k-1][0];
                    line[k][1]=line[k-1][1];
                }

                //�N�u�q���J���
                line[j][0]=temp[0];
                line[j][1]=temp[1];
                break;
            }
        }
    }

    //�P�_�u�q���p
    int start=line[0][0],end=line[0][1];//�ϥβĤ@���u�q�M����u�q�P�_
    int length=0;//�`����
    for(int i=1;i<n;++i)
    {
        //�ѩ�i��L�ƧǡA���p1���|�v�T����(���M�O�u�q1�]�t�u�q2)
        //�Y�����p2�h�i���������{���u�q�]�λ��O�u�q���X�^
        if(line[i][0]<=end)
        {
            //�N�u�q���������I�y�Щ���
            if(line[i][1]>end)end=line[i][1];
        }
        else//���p3
        {
            //�ѩ�u�q���_�A�]���i���N�e�u�q���ץ[�`���`����
            length+=(end-start);
            //���۱N�s�u�q���}�Y�M�����Ӷ}�l�p��
            start=line[i][0];
            end=line[i][1];
        }
    }
    //�̫�N�u�q�[�`���`����
    length+=(end-start);

    printf("%d",length);

    return 0;
}
