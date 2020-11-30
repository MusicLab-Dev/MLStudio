import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import "Plugins"

Window {
    width: 1920
    height: 1080
    visible: true
    color: "white"
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

//    DefaultSettingsCategoryButton {
//        anchors.centerIn: parent
//        width: 154
//        height: 41
//        text: "File"
//    }

    DefaultMenuButton {
        x: 100
        y: 100
        width: 28
        height: 23
    }

    DefaultFoldButton {
        x: 300
        y: 100
        width: 16
        height: 11
    }


    DefaultCheckBox {
        x: 500
        y: 100
        width: 26
        height: 26
        text: qsTr("CheckBox")
    }

    DefaultComboBox {
        x: 700
        y: 100
        width: 224
        height: 42
        model: ["First", "Second", "Third"]
    }

    DefaultTextInput {
        x: 1000
        y: 100
        width: 235
        height: 50
        font.pointSize: 18
        placeholderText: qsTr("Chercher un Plugin")
    }


    ListView {
        x: 1400
        y: 100

        height: 300
        model: 100

        delegate: Text {
            text: modelData
            x: 50
        }

        ScrollBar.vertical: DefaultScrollBar {
            anchors.centerIn: parent
            width: 12
            height: 141
        }
    }


    DefaultTextButton {
        x: 100
        y: 600
        text: "+ NOUVEAU WORKSPACE"
    }

    DefaultAddPreviewButton {
        x: 300
        y: 600
        width: 103
        height: 70
    }

    DefaultAddPluginButton {
        x: 600
        y: 600
        width: 150
        height: 164
    }

    DefaultSettingsCategoryButton {
        x: 900
        y: 600
        width: 154
        height: 41
        text: "File"
    }

    DefaultMenuButton {
        x: 1100
        y: 600
        width: 28
        height: 23
    }

    DefaultFoldButton {
        x: 1300
        y: 600
        width: 16
        height: 11
    }


    //PluginsView {
    //    anchors.fill: parent
    //    anchors.topMargin: parent.height * 0.025
    //    anchors.bottomMargin: parent.height * 0.025
    //    anchors.leftMargin: parent.width * 0.025
    //    anchors.rightMargin: parent.width * 0.025
    //}
}
