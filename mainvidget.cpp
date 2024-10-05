#include "mainvidget.h"
#include "ui_mainvidget.h"

MainVidget::MainVidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainVidget)
{
    ui->setupUi(this);

    //固定窗口尺寸
    this->setFixedSize(this->geometry().size());

    //去掉标题栏
    this->setWindowFlag(Qt::FramelessWindowHint);
}

MainVidget::~MainVidget()
{
    delete ui;
}

//处理UI背景
void MainVidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/img/ui.jpg"));
}


void MainVidget::on_gb_clicked()
{
    close();//关闭窗口按钮功能实现
}


void MainVidget::on_pf_clicked()
{

}


void MainVidget::on_about_clicked()
{

}


void MainVidget::on_ss_clicked()
{

}


void MainVidget::on_yinliang_valueChanged(int value)
{

}


void MainVidget::on_syq_clicked()
{

}


void MainVidget::on_bf_clicked()
{

}


void MainVidget::on_xyq_clicked()
{

}


void MainVidget::on_dqxh_clicked()
{

}


void MainVidget::on_jindutiao_valueChanged(int value)
{

}


void MainVidget::on_jindutiao_sliderPressed()
{

}


void MainVidget::on_jindutiao_sliderReleased()
{

}


void MainVidget::updateDuration(qint64){

}//更新播放进度条时间和显示


void MainVidget::netreply(QNetworkReply *){

}//读取网络数据

void MainVidget::lyricTextShow(QString){

}//显示歌词

void MainVidget::downloadPlayer(QString album_id,QString hash){

}//音乐下载 播放
void MainVidget::httpAccess(QString){

}//访问http网页
void MainVidget::hashJsonAnalysis(QByteArray){

} //音乐的hash和ablum_id值解析，使用JSON

QString musocJsonAnalysis(QByteArray){

    return "test";
} //搜索的音乐数据信息JSON解析，解析出音乐文件和歌词

void MainVidget::mouseMoveEvent(QMouseEvent *event){

    if(mousePress){
        QPoint movepos=event->globalPos();
        move(movepos-movePoint);
    }


}//移动
void MainVidget::mouseReleaseEvent(QMouseEvent *event){

    Q_UNUSED(event)
    mousePress=false;


}//释放
void MainVidget::mousePressEvent(QMouseEvent *event){


    if(event->button()==Qt::LeftButton){
        mousePress=true;
    }

    movePoint=event->globalPos()-pos();
}//按下
