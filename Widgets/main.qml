import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

//    DefaultCheckBox {
//        anchors.centerIn: parent
//        width: 26
//        height: 26
//        text: qsTr("CheckBox")
//    }

//    DefaultComboBox {
//        anchors.centerIn: parent
//        width: 224
//        height: 42
//        model: ["First", "Second", "Third"]
//    }

//    DefaultTextInput {
//        anchors.centerIn: parent
//        width: 235
//        height: 50
//        font.pointSize: 18
//        placeholderText: qsTr("Chercher un Plugin")
//    }


//    ListView {
//        anchors.fill: parent

//        model: 100

//        delegate: Text {
//            text: modelData
//        }

//        ScrollBar.vertical: DefaultScrollBar {
//            anchors.centerIn: parent
//            width: 12
//            height: 141
//        }
//    }


//    DefaultTextButton {
//        anchors.centerIn: parent
//        anchors.fill: parent
//        text: "+ NOUVEAU WORKSPACE"
//    }

//    DefaultAddPreviewButton {
//        anchors.centerIn: parent
//        anchors.fill: parent
//    }

//    DefaultAddPluginButton {
//        anchors.centerIn: parent
//        width: 150
//        height: 164
//    }

    DefaultSettingsCategoryButton {
        anchors.centerIn: parent
        width: 154
        height: 41
        text: "File"
    }
}
