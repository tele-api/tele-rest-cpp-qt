/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAILoginUrl.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAILoginUrl::OAILoginUrl(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILoginUrl::OAILoginUrl() {
    this->initializeModel();
}

OAILoginUrl::~OAILoginUrl() {}

void OAILoginUrl::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_forward_text_isSet = false;
    m_forward_text_isValid = false;

    m_bot_username_isSet = false;
    m_bot_username_isValid = false;

    m_request_write_access_isSet = false;
    m_request_write_access_isValid = false;
}

void OAILoginUrl::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILoginUrl::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_forward_text_isValid = ::tele_rest::fromJsonValue(m_forward_text, json[QString("forward_text")]);
    m_forward_text_isSet = !json[QString("forward_text")].isNull() && m_forward_text_isValid;

    m_bot_username_isValid = ::tele_rest::fromJsonValue(m_bot_username, json[QString("bot_username")]);
    m_bot_username_isSet = !json[QString("bot_username")].isNull() && m_bot_username_isValid;

    m_request_write_access_isValid = ::tele_rest::fromJsonValue(m_request_write_access, json[QString("request_write_access")]);
    m_request_write_access_isSet = !json[QString("request_write_access")].isNull() && m_request_write_access_isValid;
}

QString OAILoginUrl::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILoginUrl::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_forward_text_isSet) {
        obj.insert(QString("forward_text"), ::tele_rest::toJsonValue(m_forward_text));
    }
    if (m_bot_username_isSet) {
        obj.insert(QString("bot_username"), ::tele_rest::toJsonValue(m_bot_username));
    }
    if (m_request_write_access_isSet) {
        obj.insert(QString("request_write_access"), ::tele_rest::toJsonValue(m_request_write_access));
    }
    return obj;
}

QString OAILoginUrl::getUrl() const {
    return m_url;
}
void OAILoginUrl::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAILoginUrl::is_url_Set() const{
    return m_url_isSet;
}

bool OAILoginUrl::is_url_Valid() const{
    return m_url_isValid;
}

QString OAILoginUrl::getForwardText() const {
    return m_forward_text;
}
void OAILoginUrl::setForwardText(const QString &forward_text) {
    m_forward_text = forward_text;
    m_forward_text_isSet = true;
}

bool OAILoginUrl::is_forward_text_Set() const{
    return m_forward_text_isSet;
}

bool OAILoginUrl::is_forward_text_Valid() const{
    return m_forward_text_isValid;
}

QString OAILoginUrl::getBotUsername() const {
    return m_bot_username;
}
void OAILoginUrl::setBotUsername(const QString &bot_username) {
    m_bot_username = bot_username;
    m_bot_username_isSet = true;
}

bool OAILoginUrl::is_bot_username_Set() const{
    return m_bot_username_isSet;
}

bool OAILoginUrl::is_bot_username_Valid() const{
    return m_bot_username_isValid;
}

bool OAILoginUrl::isRequestWriteAccess() const {
    return m_request_write_access;
}
void OAILoginUrl::setRequestWriteAccess(const bool &request_write_access) {
    m_request_write_access = request_write_access;
    m_request_write_access_isSet = true;
}

bool OAILoginUrl::is_request_write_access_Set() const{
    return m_request_write_access_isSet;
}

bool OAILoginUrl::is_request_write_access_Valid() const{
    return m_request_write_access_isValid;
}

bool OAILoginUrl::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_forward_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bot_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_request_write_access_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILoginUrl::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_url_isValid && true;
}

} // namespace tele_rest
