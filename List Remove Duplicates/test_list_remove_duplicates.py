import unittest

from list_remove_duplicates import remove_duplicates_1, remove_duplicates_2


class Test_List_Remove_Duplicates1(unittest.TestCase):
    
    def test_duplicates_removed(self):
        self.assertEqual(remove_duplicates_1([1,1,3,4]), [1,3,4])
        self.assertEqual(remove_duplicates_1([]), [])