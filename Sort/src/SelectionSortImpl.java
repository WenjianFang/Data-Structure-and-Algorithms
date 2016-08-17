
public class SelectionSortImpl implements SortService{

	@Override
	public int sort(int[] ori_array, int n) {
		// TODO Auto-generated method stub
		for(int i=0; i<n; i++){
			int lowIndex=i;
			for(int j=i+1; j<n; j++){
				if(ori_array[j] < ori_array[lowIndex])
					lowIndex = j;
			}
			UtilTool.swap(ori_array, lowIndex, i);
		}
		return 0;
	}
	
}