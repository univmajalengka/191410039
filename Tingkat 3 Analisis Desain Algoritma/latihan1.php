<!DOCTYPE html>
<html>
<head>
	<title>Mencari Nilai Array Yang Hilang</title>
</head>
<body>
<?php 
$array1 = array(1,2,3,4,6,7,8,10);
$array2 = range(1,6);
$array3 = range(1,10);
$pencarian1 = array_diff($array2, $array1);
$pencarian2 = array_diff($array3, $array1);

echo "Mencari Nilai Angka Yang Hilang Pada Array<br><br>";
echo "Total Angka = 6  <br>";
echo "Array = [1,2,3,4,6] <br>";
echo "Hilang : " . implode(', ', $pencarian1);

echo "<br><br>";
echo "Total Angka = 10  <br>";
echo "Array = [1,2,3,4,6,7,8,10] <br>";
echo "Hilang : " . implode(', ', $pencarian2);
?>
</body>
</html>