#ifndef MAINVIDGET_H
#define MAINVIDGET_H

#include <QWidget>

#include <QPainter> //实现窗口重绘

 #include <QNetworkRequest> //HTTP的URL请求管理

 #include <QNetworkAccessManager> //URL的上传管理

#include <QNetworkReply> //网页回复数据触发信号的类

#include <QEventLoop> //QEventLoop类提供一种进入和离开事件循环的方法

#include <QJsonArray> //用于封装JSON数组

#include <QJsonDocument> //封装JSON对象

#include <QMediaPlayer>
#include <QAudioOutput>
#include <QDebug>

#include <QSqlDatabase> //连接数据库
#include <QSqlQuery>
#include <QSqlRecord>

#include <QMessageBox>
#include <QTime>
#include <math.h>

#include <QMouseEvent>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainVidget;
}
QT_END_NAMESPACE

class MainVidget : public QWidget
{
    Q_OBJECT

public:
    MainVidget(QWidget *parent = nullptr);
    ~MainVidget();

    //处理UI背景
    void paintEvent(QPaintEvent *event);


signals:
    void finish(QByteArray);
    void lyricShow(QString);

private slots:

    void on_gb_clicked();//关闭窗口

    void on_pf_clicked();//更换背景

    void on_about_clicked();//关于

    void on_ss_clicked();//搜索按钮

    void on_yinliang_valueChanged(int value);//音量调节

    void on_syq_clicked();//上一曲按钮

    void on_bf_clicked();//播放、暂停按钮

    void on_xyq_clicked();//下一曲按钮

    void on_dqxh_clicked();//单曲循环按钮

    void on_jindutiao_valueChanged(int value);//播放进度条改值

    void on_jindutiao_sliderPressed();//播放进度点击事件

    void on_jindutiao_sliderReleased();//播放进度点击结束事件

    void updateDuration(qint64);//更新播放进度条时间和显示

    void netreply(QNetworkReply *);//读取网络数据

    void lyricTextShow(QString);//显示歌词

protected:

    void downloadPlayer(QString album_id,QString hash); //音乐下载 播放
    void httpAccess(QString); //访问http网页
    void hashJsonAnalysis(QByteArray); //音乐的hash和ablum_id值解析，使用JSON

    QString musocJsonAnalysis(QByteArray); //搜索的音乐数据信息JSON解析，解析出音乐文件和歌词

private:
    Ui::MainVidget *ui;

    //网络 播放器 SQLite
    QNetworkRequest *request;
    QNetworkAccessManager *manager;
    QMediaPlayer *player;
    QSqlDatabase db;
    int num,row;

private:
    QPoint m_mousePoint;
    QPoint movePoint;
    bool mousePress;
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

};
#endif // MAINVIDGET_H
