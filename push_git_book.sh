message=$1
if [ !$message ]
then
    echo "git commit message can't be empty!"
    exit 1
fi
cd /Users/bing/code/journey-of-coding/blog
echo "gitbook building..."
gitbook build
echo "正在复制_book文件······"
cd ..
\cp -R ./blog/_book/* ../_book
echo "复制_book完成"
cd ../_book
#提交到github
git add -A
git commit -m "$message"
echo "push to github······"
git push origin gh-pages

echo "publish success."

