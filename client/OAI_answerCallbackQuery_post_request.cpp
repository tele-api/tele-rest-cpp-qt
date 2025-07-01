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

#include "OAI_answerCallbackQuery_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_answerCallbackQuery_post_request::OAI_answerCallbackQuery_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_answerCallbackQuery_post_request::OAI_answerCallbackQuery_post_request() {
    this->initializeModel();
}

OAI_answerCallbackQuery_post_request::~OAI_answerCallbackQuery_post_request() {}

void OAI_answerCallbackQuery_post_request::initializeModel() {

    m_callback_query_id_isSet = false;
    m_callback_query_id_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_show_alert_isSet = false;
    m_show_alert_isValid = false;

    m_url_isSet = false;
    m_url_isValid = false;

    m_cache_time_isSet = false;
    m_cache_time_isValid = false;
}

void OAI_answerCallbackQuery_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_answerCallbackQuery_post_request::fromJsonObject(QJsonObject json) {

    m_callback_query_id_isValid = ::tele_rest::fromJsonValue(m_callback_query_id, json[QString("callback_query_id")]);
    m_callback_query_id_isSet = !json[QString("callback_query_id")].isNull() && m_callback_query_id_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_show_alert_isValid = ::tele_rest::fromJsonValue(m_show_alert, json[QString("show_alert")]);
    m_show_alert_isSet = !json[QString("show_alert")].isNull() && m_show_alert_isValid;

    m_url_isValid = ::tele_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_cache_time_isValid = ::tele_rest::fromJsonValue(m_cache_time, json[QString("cache_time")]);
    m_cache_time_isSet = !json[QString("cache_time")].isNull() && m_cache_time_isValid;
}

QString OAI_answerCallbackQuery_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_answerCallbackQuery_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_callback_query_id_isSet) {
        obj.insert(QString("callback_query_id"), ::tele_rest::toJsonValue(m_callback_query_id));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_show_alert_isSet) {
        obj.insert(QString("show_alert"), ::tele_rest::toJsonValue(m_show_alert));
    }
    if (m_url_isSet) {
        obj.insert(QString("url"), ::tele_rest::toJsonValue(m_url));
    }
    if (m_cache_time_isSet) {
        obj.insert(QString("cache_time"), ::tele_rest::toJsonValue(m_cache_time));
    }
    return obj;
}

QString OAI_answerCallbackQuery_post_request::getCallbackQueryId() const {
    return m_callback_query_id;
}
void OAI_answerCallbackQuery_post_request::setCallbackQueryId(const QString &callback_query_id) {
    m_callback_query_id = callback_query_id;
    m_callback_query_id_isSet = true;
}

bool OAI_answerCallbackQuery_post_request::is_callback_query_id_Set() const{
    return m_callback_query_id_isSet;
}

bool OAI_answerCallbackQuery_post_request::is_callback_query_id_Valid() const{
    return m_callback_query_id_isValid;
}

QString OAI_answerCallbackQuery_post_request::getText() const {
    return m_text;
}
void OAI_answerCallbackQuery_post_request::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAI_answerCallbackQuery_post_request::is_text_Set() const{
    return m_text_isSet;
}

bool OAI_answerCallbackQuery_post_request::is_text_Valid() const{
    return m_text_isValid;
}

bool OAI_answerCallbackQuery_post_request::isShowAlert() const {
    return m_show_alert;
}
void OAI_answerCallbackQuery_post_request::setShowAlert(const bool &show_alert) {
    m_show_alert = show_alert;
    m_show_alert_isSet = true;
}

bool OAI_answerCallbackQuery_post_request::is_show_alert_Set() const{
    return m_show_alert_isSet;
}

bool OAI_answerCallbackQuery_post_request::is_show_alert_Valid() const{
    return m_show_alert_isValid;
}

QString OAI_answerCallbackQuery_post_request::getUrl() const {
    return m_url;
}
void OAI_answerCallbackQuery_post_request::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAI_answerCallbackQuery_post_request::is_url_Set() const{
    return m_url_isSet;
}

bool OAI_answerCallbackQuery_post_request::is_url_Valid() const{
    return m_url_isValid;
}

qint32 OAI_answerCallbackQuery_post_request::getCacheTime() const {
    return m_cache_time;
}
void OAI_answerCallbackQuery_post_request::setCacheTime(const qint32 &cache_time) {
    m_cache_time = cache_time;
    m_cache_time_isSet = true;
}

bool OAI_answerCallbackQuery_post_request::is_cache_time_Set() const{
    return m_cache_time_isSet;
}

bool OAI_answerCallbackQuery_post_request::is_cache_time_Valid() const{
    return m_cache_time_isValid;
}

bool OAI_answerCallbackQuery_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_callback_query_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_alert_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_cache_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_answerCallbackQuery_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_callback_query_id_isValid && true;
}

} // namespace tele_rest
