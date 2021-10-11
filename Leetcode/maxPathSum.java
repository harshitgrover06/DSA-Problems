//https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

class Solution {
    public int maxPathSum(TreeNode root) {

        int[] res = new int[1];
        res[0] = Integer.MIN_VALUE;
        rec(root, res);
        return res[0];

    }

    public int rec(TreeNode root, int[] res)
    {
        if(root == null) return 0;

        int left = rec(root.left, res);
        int right = rec(root.right, res);

        int temp = Math.max(Math.max(left, right) + root.val, root.val);
        int ans = Math.max(temp, left+right+root.val);
        res[0] = Math.max(res[0], ans);
        //System.out.println(res);
        return temp;

    }
}
