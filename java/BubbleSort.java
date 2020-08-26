public class BubbleSort {
	public static void main(String[] args) {
	int array[] = {30, 10, 20, 1, 100, 700, 500, 50};
	System.out.println("before");
	for (int a:array)
		System.out.println(a);
	for (int i = 0; i < array.length - 1; i++) {
		for (int j = array.length - 1; j > i; j--) {
			if (array[j - 1] > array[j]) {
				int tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
		}
	}
	System.out.println("after");
	for (int a:array)
		System.out.println(a);
	}
}
