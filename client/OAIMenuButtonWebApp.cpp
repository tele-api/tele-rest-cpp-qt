/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIMenuButtonWebApp.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMenuButtonWebApp::OAIMenuButtonWebApp(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMenuButtonWebApp::OAIMenuButtonWebApp() {
    this->initializeModel();
}

OAIMenuButtonWebApp::~OAIMenuButtonWebApp() {}

void OAIMenuButtonWebApp::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_web_app_isSet = false;
    m_web_app_isValid = false;
}

void OAIMenuButtonWebApp::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMenuButtonWebApp::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_web_app_isValid = ::tele_rest::fromJsonValue(m_web_app, json[QString("web_app")]);
    m_web_app_isSet = !json[QString("web_app")].isNull() && m_web_app_isValid;
}

QString OAIMenuButtonWebApp::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMenuButtonWebApp::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_web_app.isSet()) {
        obj.insert(QString("web_app"), ::tele_rest::toJsonValue(m_web_app));
    }
    return obj;
}

QString OAIMenuButtonWebApp::getType() const {
    return m_type;
}
void OAIMenuButtonWebApp::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIMenuButtonWebApp::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMenuButtonWebApp::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMenuButtonWebApp::getText() const {
    return m_text;
}
void OAIMenuButtonWebApp::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIMenuButtonWebApp::is_text_Set() const{
    return m_text_isSet;
}

bool OAIMenuButtonWebApp::is_text_Valid() const{
    return m_text_isValid;
}

OAIWebAppInfo OAIMenuButtonWebApp::getWebApp() const {
    return m_web_app;
}
void OAIMenuButtonWebApp::setWebApp(const OAIWebAppInfo &web_app) {
    m_web_app = web_app;
    m_web_app_isSet = true;
}

bool OAIMenuButtonWebApp::is_web_app_Set() const{
    return m_web_app_isSet;
}

bool OAIMenuButtonWebApp::is_web_app_Valid() const{
    return m_web_app_isValid;
}

bool OAIMenuButtonWebApp::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_app.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMenuButtonWebApp::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_text_isValid && m_web_app_isValid && true;
}

} // namespace tele_rest
