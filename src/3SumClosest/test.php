<?php
const MAX_DISTANCE = 999999;

$arr 	= array(-1, 2, 1, -4);
$target = 1;
$list   = array();

$ret 	= sum($arr, $target, $list);

print_r($list);
echo $ret;die;



function sum($arr, $target, &$list)
{
	sort($arr);

	$len = count($arr);

	$result;
	$tmp = array();
	for($i=0; $i<$len-2; $i++)
	{
		$a=$arr[$i];

		$low  = $i+1;
		$high = $len-1; 

		$dist = MAX_DISTANCE;

		while ($low < $high)
		{
			$b = $arr[$low];
			$c = $arr[$high];

			$sum = $a + $b + $c;
			$tmp=array($a, $b, $c);

			if($sum-$target==0)
			{
				$list[] = $tmp;
				return $target;
			}
			else if ($sum-$target>0)
			{
				if(abs($sum-$target)<MAX_DISTANCE)
				{
					$dist=  abs($sum-$target);
					$result = $sum;
				}

				while($high>0 && $arr[$high-1]==$arr[$high]) $high--;
				$high--;
			}
			else
			{
				if(abs($sum-$target)<MAX_DISTANCE)
				{
					$dist =  abs($sum-$target);
					$result = $sum;
				}

				while($low<$len && $arr[$low+1]==$arr[$low]) $low++;
				$low++;
			}
		}
	}


	$list[] = $tmp;
	return $result;
}
