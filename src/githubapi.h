#ifndef GITHUBAPI_H
#define GITHUBAPI_H

#include <QObject>
#include <QUrl>
#include <QUrlQuery>

/*!
 * \brief The GitHubApi class github 上使用的 api 接口类调用；函数名称默认为 gh 开头
 */
class GitHubApi : public QObject
{
    Q_OBJECT
public:
    explicit GitHubApi(QObject *parent = nullptr);

    QUrl ghGetOrgsReposRul(QUrlQuery query);
    QUrl ghGetReposBranches(QString ower, QString repo, QUrlQuery query);

private:
    QUrl m_ghBase;
    QUrl m_ghCat;
    QUrlQuery m_ghQuery;

};

#endif // GITHUBAPI_H