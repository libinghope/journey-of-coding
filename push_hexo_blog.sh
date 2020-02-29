message=$1
if [ -z "$message" ]
then
    echo "git commit message can't be empty!exit..."
    exit 1
fi
#首先提交主分支
echo "开始提交主分支master......"
git add -A
git commit -m "$message"
git push origin master
echo "主分支master提交完成......."

cd hexo-blog
echo "hexo-blog building......"
hexo g
echo "正在复制web文件······"
cd ..
rm -r ../blog/*
\cp -R ./hexo-blog/public/* ../blog
echo "复制_book完成"
cd ../blog

echo "提交gh-pages分支......"
git add -A
git commit -m "$message"
git push origin gh-pages

echo "push origin->gh-pages success."

