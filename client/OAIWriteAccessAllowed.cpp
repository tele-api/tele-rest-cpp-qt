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

#include "OAIWriteAccessAllowed.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIWriteAccessAllowed::OAIWriteAccessAllowed(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWriteAccessAllowed::OAIWriteAccessAllowed() {
    this->initializeModel();
}

OAIWriteAccessAllowed::~OAIWriteAccessAllowed() {}

void OAIWriteAccessAllowed::initializeModel() {

    m_from_request_isSet = false;
    m_from_request_isValid = false;

    m_web_app_name_isSet = false;
    m_web_app_name_isValid = false;

    m_from_attachment_menu_isSet = false;
    m_from_attachment_menu_isValid = false;
}

void OAIWriteAccessAllowed::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWriteAccessAllowed::fromJsonObject(QJsonObject json) {

    m_from_request_isValid = ::tele_rest::fromJsonValue(m_from_request, json[QString("from_request")]);
    m_from_request_isSet = !json[QString("from_request")].isNull() && m_from_request_isValid;

    m_web_app_name_isValid = ::tele_rest::fromJsonValue(m_web_app_name, json[QString("web_app_name")]);
    m_web_app_name_isSet = !json[QString("web_app_name")].isNull() && m_web_app_name_isValid;

    m_from_attachment_menu_isValid = ::tele_rest::fromJsonValue(m_from_attachment_menu, json[QString("from_attachment_menu")]);
    m_from_attachment_menu_isSet = !json[QString("from_attachment_menu")].isNull() && m_from_attachment_menu_isValid;
}

QString OAIWriteAccessAllowed::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWriteAccessAllowed::asJsonObject() const {
    QJsonObject obj;
    if (m_from_request_isSet) {
        obj.insert(QString("from_request"), ::tele_rest::toJsonValue(m_from_request));
    }
    if (m_web_app_name_isSet) {
        obj.insert(QString("web_app_name"), ::tele_rest::toJsonValue(m_web_app_name));
    }
    if (m_from_attachment_menu_isSet) {
        obj.insert(QString("from_attachment_menu"), ::tele_rest::toJsonValue(m_from_attachment_menu));
    }
    return obj;
}

bool OAIWriteAccessAllowed::isFromRequest() const {
    return m_from_request;
}
void OAIWriteAccessAllowed::setFromRequest(const bool &from_request) {
    m_from_request = from_request;
    m_from_request_isSet = true;
}

bool OAIWriteAccessAllowed::is_from_request_Set() const{
    return m_from_request_isSet;
}

bool OAIWriteAccessAllowed::is_from_request_Valid() const{
    return m_from_request_isValid;
}

QString OAIWriteAccessAllowed::getWebAppName() const {
    return m_web_app_name;
}
void OAIWriteAccessAllowed::setWebAppName(const QString &web_app_name) {
    m_web_app_name = web_app_name;
    m_web_app_name_isSet = true;
}

bool OAIWriteAccessAllowed::is_web_app_name_Set() const{
    return m_web_app_name_isSet;
}

bool OAIWriteAccessAllowed::is_web_app_name_Valid() const{
    return m_web_app_name_isValid;
}

bool OAIWriteAccessAllowed::isFromAttachmentMenu() const {
    return m_from_attachment_menu;
}
void OAIWriteAccessAllowed::setFromAttachmentMenu(const bool &from_attachment_menu) {
    m_from_attachment_menu = from_attachment_menu;
    m_from_attachment_menu_isSet = true;
}

bool OAIWriteAccessAllowed::is_from_attachment_menu_Set() const{
    return m_from_attachment_menu_isSet;
}

bool OAIWriteAccessAllowed::is_from_attachment_menu_Valid() const{
    return m_from_attachment_menu_isValid;
}

bool OAIWriteAccessAllowed::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_from_request_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_app_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_from_attachment_menu_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWriteAccessAllowed::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
