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

#include "OAI_setMyDescription_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_setMyDescription_post_request::OAI_setMyDescription_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_setMyDescription_post_request::OAI_setMyDescription_post_request() {
    this->initializeModel();
}

OAI_setMyDescription_post_request::~OAI_setMyDescription_post_request() {}

void OAI_setMyDescription_post_request::initializeModel() {

    m_description_isSet = false;
    m_description_isValid = false;

    m_language_code_isSet = false;
    m_language_code_isValid = false;
}

void OAI_setMyDescription_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_setMyDescription_post_request::fromJsonObject(QJsonObject json) {

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_language_code_isValid = ::tele_rest::fromJsonValue(m_language_code, json[QString("language_code")]);
    m_language_code_isSet = !json[QString("language_code")].isNull() && m_language_code_isValid;
}

QString OAI_setMyDescription_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_setMyDescription_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_language_code_isSet) {
        obj.insert(QString("language_code"), ::tele_rest::toJsonValue(m_language_code));
    }
    return obj;
}

QString OAI_setMyDescription_post_request::getDescription() const {
    return m_description;
}
void OAI_setMyDescription_post_request::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAI_setMyDescription_post_request::is_description_Set() const{
    return m_description_isSet;
}

bool OAI_setMyDescription_post_request::is_description_Valid() const{
    return m_description_isValid;
}

QString OAI_setMyDescription_post_request::getLanguageCode() const {
    return m_language_code;
}
void OAI_setMyDescription_post_request::setLanguageCode(const QString &language_code) {
    m_language_code = language_code;
    m_language_code_isSet = true;
}

bool OAI_setMyDescription_post_request::is_language_code_Set() const{
    return m_language_code_isSet;
}

bool OAI_setMyDescription_post_request::is_language_code_Valid() const{
    return m_language_code_isValid;
}

bool OAI_setMyDescription_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_language_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_setMyDescription_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace tele_rest
