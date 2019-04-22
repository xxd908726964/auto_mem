#ifndef _H_AUTO_MEM_H_
#define _H_AUTO_MEM_H_
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<cstl/cmap.h>

//�ѵ�ַ�ṹ
struct p_data
{
	void	*ptr;//malloc������ڴ��ַ
	int		count;//���ô���
};
//��������
struct value {
	void			*p_value;//�������ڴ�ı�����ַ
	struct p_data   *data;//���ڴ��ַ
};

//����ṹ
typedef struct 
{
	map_t* data;
	map_t* value;

}auto_mem_t;

int auto_mem_malloc(size_t size, void** value);
int auto_mem_ptr_cpy(void* scr, void** tag);
int auto_mem_init(auto_mem_t* )






#endif // !_H_AUTO_MEM_MANA_H_

