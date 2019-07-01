#include "mainwindow.h"
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedLayout>
#include "autocompletesettingseditor.h"
#include "avatarsettingseditor.h"
#include "circularprogresssettingseditor.h"
#include "dialogsettingseditor.h"
#include "drawersettingseditor.h"
#include "fabsettingseditor.h"
#include "flatbuttonsettingseditor.h"
#include "iconbuttonsettingseditor.h"
#include "menusettingseditor.h"
#include "progresssettingseditor.h"
#include "raisedbuttonsettingseditor.h"
#include "scrollbarsettingseditor.h"
#include "slidersettingseditor.h"
#include "snackbarsettingseditor.h"
#include "tabssettingseditor.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
  QWidget* widget = new QWidget;
  QHBoxLayout* layout = new QHBoxLayout;

  widget->setLayout(layout);

  QStackedLayout* stack = new QStackedLayout;
  QListWidget* list = new QListWidget;

  layout->addWidget(list);
  layout->addLayout(stack);

  layout->setStretch(1, 2);

  setCentralWidget(widget);

  auto avatar = new AvatarSettingsEditor;
  auto fab = new FloatingActionButtonSettingsEditor;
  auto raisedButton = new RaisedButtonSettingsEditor;
  auto flatButton = new FlatButtonSettingsEditor;
  auto iconButton = new IconButtonSettingsEditor;
  auto progress = new ProgressSettingsEditor;
  auto circularProgress = new CircularProgressSettingsEditor;
  auto slider = new SliderSettingsEditor;
  auto tabs = new TabsSettingsEditor;
  auto snackbar = new SnackbarSettingsEditor;
  auto dialog = new DialogSettingsEditor;
  auto drawer = new DrawerSettingsEditor;
  auto scrollBar = new ScrollBarSettingsEditor;
  auto autocomplete = new AutoCompleteSettingsEditor;
  auto menu = new MenuSettingsEditor;

  stack->addWidget(autocomplete);
  stack->addWidget(avatar);
  stack->addWidget(circularProgress);
  stack->addWidget(dialog);
  stack->addWidget(drawer);
  stack->addWidget(fab);
  stack->addWidget(flatButton);
  stack->addWidget(iconButton);
  stack->addWidget(menu);
  stack->addWidget(progress);
  stack->addWidget(raisedButton);
  stack->addWidget(scrollBar);
  stack->addWidget(slider);
  stack->addWidget(snackbar);
  stack->addWidget(tabs);

  list->addItem("Auto Complete");
  list->addItem("Avatar");
  list->addItem("Circular Progress");
  list->addItem("Dialog");
  list->addItem("Drawer");
  list->addItem("Floating Action Button");
  list->addItem("Flat Button");
  list->addItem("Icon Button");
  list->addItem("Menu");
  list->addItem("Progress");
  list->addItem("Raised Button");
  list->addItem("ScrollBar");
  list->addItem("Slider");
  list->addItem("Snackbar");
  list->addItem("Tabs");
  list->setCurrentRow(0);

  QObject::connect(list, &QListWidget::currentItemChanged,
                   [=] { stack->setCurrentIndex(list->currentRow()); });
}

MainWindow::~MainWindow() {}
