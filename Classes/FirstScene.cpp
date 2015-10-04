#include "FirstScene.h"

USING_NS_CC;

Scene* FirstScene::createScene()
{
    auto scene = Scene::create();
    auto layer = FirstScene::create();

    scene->addChild(layer);

    return scene;
}

bool FirstScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
   
    auto label = Label::createWithSystemFont("Hello World", "Arial", 32);
    label->setPosition(this->getBoundingBox().getMidX(), this->getBoundingBox().getMidY());
    this->addChild(label);

    return true;
}

