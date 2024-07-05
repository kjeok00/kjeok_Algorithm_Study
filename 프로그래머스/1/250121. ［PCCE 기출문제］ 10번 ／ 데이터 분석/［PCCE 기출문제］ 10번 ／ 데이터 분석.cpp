#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//           code,   date,   maximum,  remain
// 데이터[코드번호, 제조일, 최대수량, 현재수량]
// ext: 기준, val_ext: 기준값, sort_by: 기준 문자열
// data에서 ext값이 val_ext보다 작은 데이터만 뽑고, sort_by에 해당하는 값을 기준으로 오름차순정렬

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<int> valedNum;

    int extNum=0;
    int sortNum=0;

    if (ext == "code")
        extNum = 0;
    else if (ext == "date")
        extNum = 1;
    else if (ext == "maximum")
        extNum = 2;
    else if (ext == "remain")
        extNum = 3;

    if (sort_by == "code")
        sortNum = 0;
    else if (sort_by == "date")
        sortNum = 1;
    else if (sort_by == "maximum")
        sortNum = 2;
    else if (sort_by == "remain")
        sortNum = 3;

    // val_ext 미만 수 분류
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i][extNum] < val_ext)
            valedNum.push_back(data[i][sortNum]);
    }

    sort(valedNum.begin(), valedNum.end());

    // sort_by 기준 정렬
    for (int i = 0; i < valedNum.size(); i++)
    {
        for (int j = 0; j < data.size(); j++)
        {
            if (valedNum[i] == data[j][sortNum])
                answer.push_back(data[j]);
        }
    }
    

    return answer;
}