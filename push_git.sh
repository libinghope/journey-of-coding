# 参数一 commit时候的message
message=$1
# 参数二 是否要重新generate hexo-blog,非空即为真
push_blog=$2
if [ -z "$message" ]
then
#commit message 不能为空
    echo "git commit message can't be empty!exit..."
    exit 1
fi
#提交主分支
echo "git push origin master......"
git add -A
git commit -m "$message"
git push origin master
echo "push master branch success."
#是否需要重新生成博客,默认不生成
if [ $push_blog ]
then
cd hexo-blog
echo "cleaning cache......"
hexo clean
echo "clean task is over......"
echo "hexo-blog building......"
hexo g
echo "hexo-blog has builded successfully."
:<<!  
hexo自带的hexo-deployer-git还要申请TOKEN,蠢得要死,不用了
echo "hexo cleaning......"
Run hexo clean 
echo "hexo clean finished......"

echo "hexo deploying......"
hexo deploy
echo "hexo deploy finished......"
echo "everything is ok......"
!

echo "coping web static file······"
cd ..
rm -r ../blog/*
\cp -R ./hexo-blog/public/* ../blog
echo "finished copying static file"
cd ../blog

echo "git push origin gh-pages......"
git add -A
git commit -m "$message"
git push origin gh-pages

echo "publish blog success. Go and to see your website."
fi

