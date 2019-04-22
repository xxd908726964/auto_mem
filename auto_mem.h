#ifndef _H_AUTO_MEM_H_
#define _H_AUTO_MEM_H_
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<cstl/cmap.h>

//堆地址结构
struct p_data
{
	void	*ptr;//malloc分配堆内存地址
	int		count;//引用次数
};
//变量机构
struct value {
	void			*p_value;//关联堆内存的变量地址
	struct p_data   *data;//堆内存地址
};

//管理结构
typedef struct 
{
	map_t* data;
	map_t* value;

}auto_mem_t;

int auto_mem_malloc(size_t size, void** value);
int auto_mem_ptr_cpy(void* scr, void** tag);
int auto_mem_init(auto_mem_t* )






#endif // !_H_AUTO_MEM_MANA_H_

