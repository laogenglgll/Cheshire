/*rand函数的使用    
如果想要表示一个数是从0开始到最大值的，比如说，想要产生一个0-99之间的随机数，那么用法如下
int num = rand() % 100；
如果想要产生一个数是从1开始到最大值的，比如说，想要产生一个1-100之间的随机数，那么用法如下
int num = rand() % 100 + 1;
需要注意最后+1和不+1的区别，+1的最小值是1，不+1的最小值是0

————————————————
版权声明：本文为CSDN博主「TLpigff」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/lvyibin890/article/details/80141412
/*方法1 固定基准元
如果输入序列是随机的，处理时间是可以接受的。如果数组已经有序时，此时的分割就是一个非常不好的分割。因为每次划分只能使待排序序列减一，此时为最坏情况，快速排序沦为冒泡排序，时间复杂度为Θ(n^2)。而且，输入的数据是有序或部分有序的情况是相当常见的。因此，使用第一个元素作为基准元是非常糟糕的，应该立即放弃这种想法。
方法2 随机基准元
这是一种相对安全的策略。由于基准元的位置是随机的，那么产生的分割也不会总是会出现劣质的分割。在整个数组数字全相等时，仍然是最坏情况，时间复杂度是O(n^2）。实际上，随机化快速排序得到理论最坏情况的可能性仅为1/(2^n）。所以随机化快速排序可以对于绝大多数输入数据达到O(nlogn）的期望时间复杂度。
方法3 三数取中
引入的原因：虽然随机选取基准时，减少出现不好分割的几率，但是还是最坏情况下还是O(n^2），要缓解这种情况，就引入了三数取中选取基准。

分析：最佳的划分是将待排序的序列分成等长的子序列，最佳的状态我们可以使用序列的中间的值，也就是第N/2个数。可是，这很难算出来，并且会明显减慢快速排序的速度。这样的中值的估计可以通过随机选取三个元素并用它们的中值作为基准元而得到。事实上，随机性并没有多大的帮助，因此一般的做法是使用左端、右端和中心位置上的三个元素的中值作为基准元。显然使用三数中值分割法消除了预排序输入的不好情形，并且减少快排大约5%的比较次数。

举例：待排序序列为：8 1 4 9 6 3 5 2 7 0

左边为：8，右边为0，中间为6

我们这里取三个数排序后，中间那个数作为枢轴，则枢轴为6。

下面是实现代码：

//交换子表的记录，使枢轴记录到位，并返回枢轴所在的位置
int Partition(int array[], int low, int high){
 
	/*三数中值分割法*/
	int m = low + (high - low) / 2;//数组中间元素的下标
	if (array[low]>array[high])   //保证左端较小
		swap(array, low, high);
	if (array[m] > array[high])   //保证中间较小
		swap(array, high, m);
	if (array[m] > array[low])
		swap(array, m, low);      //保证左端最小
	//此时array[low]已经为整个序列左中右三个关键字的中间值
	int pivotkey = array[low];
 
	/*固定基准元
	 int pivotkey = array[low];
	 */
 
	/*随机基准元
	int randomIndex = rand() % (high - low) + low;//取数组中随机下标
	swap(array, randomIndex, low);                //与第一个数交换
	int pivotkey = array[low];
	*/
 
	int i = low, j = high;
	while(i<j) //从表的两端交替向中间扫描,当没有相遇
	{
		while (array[j] >= pivotkey&&i<j){
			j--;
		}
		while (array[i] <= pivotkey&&i<j){
			i++;
		}
		if (i<j)
		{
			swap(array, i, j);
		}	
	}
	//最终将基准数归位
	swap(array, low, i);
	return i;              //返回枢轴所在的位置
}
void QSort(int array[], int low, int high){
	int pivot;
	if (low<high)
	{
		pivot = Partition(array, low, high);//算出枢轴值
		QSort(array, low, pivot - 1);       //对低子表递归排序
		QSort(array, pivot + 1, high);      //对高子表递归排序
	}
}
//对array做快速排序
void QuickSort(int array[], int n){
	QSort(array, 0, n - 1);
}

快速排序的优化
对于很小的数组（N<=20）,快速排序不如插入排序好。不仅如此，因为快速排序是递归的，所以这样的情况经常发生。通常的解决办法是对于小的数组不递归的使用快速排序，而代之以诸如插入排序这样的对小数组有效的排序算法。使用这种策略实际上可以节省大约15%的（相对于自始至终使用快速排序时）的运行时间。一种好的截止范围是N=10，虽然在5到20之间任一截止范围都有可能产生类似的结果。
下面是代码：
void QSort(int array[], int low, int high){
	int pivot;
	if (high-low+1>=10)
	{	
		pivot = Partition(array, low, high);//算出枢轴值
		QSort(array, low, pivot - 1);       //对低子表递归排序
		QSort(array, pivot + 1, high);      //对高子表递归排序
	}
	else{
		InsertSort(array+low, high-low+1); //插入排序
	}		
}

插入排序代码：
/************************************************************************/
/* 插入排序      时间复杂度：O(n^2)，空间复杂度：O(1)，稳定                                                       */
/************************************************************************/
void InsertSort(int array[], int n){
	int j;
	for (int i = 1; i < n;++i)
	{
		int key = array[i];
		for (j = i; j>0 && array[j - 1] > key;j--)
		{
			array[j] = array[j - 1];
		}
		array[j] = key;
	}
}

————————————————
版权声明：本文为CSDN博主「liuyi1207164339」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/liuyi1207164339/article/details/50827608*/