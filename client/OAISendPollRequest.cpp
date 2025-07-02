/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAISendPollRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendPollRequest::OAISendPollRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendPollRequest::OAISendPollRequest() {
    this->initializeModel();
}

OAISendPollRequest::~OAISendPollRequest() {}

void OAISendPollRequest::initializeModel() {

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_question_isSet = false;
    m_question_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_question_parse_mode_isSet = false;
    m_question_parse_mode_isValid = false;

    m_question_entities_isSet = false;
    m_question_entities_isValid = false;

    m_is_anonymous_isSet = false;
    m_is_anonymous_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_allows_multiple_answers_isSet = false;
    m_allows_multiple_answers_isValid = false;

    m_correct_option_id_isSet = false;
    m_correct_option_id_isValid = false;

    m_explanation_isSet = false;
    m_explanation_isValid = false;

    m_explanation_parse_mode_isSet = false;
    m_explanation_parse_mode_isValid = false;

    m_explanation_entities_isSet = false;
    m_explanation_entities_isValid = false;

    m_open_period_isSet = false;
    m_open_period_isValid = false;

    m_close_date_isSet = false;
    m_close_date_isValid = false;

    m_is_closed_isSet = false;
    m_is_closed_isValid = false;

    m_disable_notification_isSet = false;
    m_disable_notification_isValid = false;

    m_protect_content_isSet = false;
    m_protect_content_isValid = false;

    m_allow_paid_broadcast_isSet = false;
    m_allow_paid_broadcast_isValid = false;

    m_message_effect_id_isSet = false;
    m_message_effect_id_isValid = false;

    m_reply_parameters_isSet = false;
    m_reply_parameters_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAISendPollRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendPollRequest::fromJsonObject(QJsonObject json) {

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_question_isValid = ::tele_rest::fromJsonValue(m_question, json[QString("question")]);
    m_question_isSet = !json[QString("question")].isNull() && m_question_isValid;

    m_options_isValid = ::tele_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_question_parse_mode_isValid = ::tele_rest::fromJsonValue(m_question_parse_mode, json[QString("question_parse_mode")]);
    m_question_parse_mode_isSet = !json[QString("question_parse_mode")].isNull() && m_question_parse_mode_isValid;

    m_question_entities_isValid = ::tele_rest::fromJsonValue(m_question_entities, json[QString("question_entities")]);
    m_question_entities_isSet = !json[QString("question_entities")].isNull() && m_question_entities_isValid;

    m_is_anonymous_isValid = ::tele_rest::fromJsonValue(m_is_anonymous, json[QString("is_anonymous")]);
    m_is_anonymous_isSet = !json[QString("is_anonymous")].isNull() && m_is_anonymous_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_allows_multiple_answers_isValid = ::tele_rest::fromJsonValue(m_allows_multiple_answers, json[QString("allows_multiple_answers")]);
    m_allows_multiple_answers_isSet = !json[QString("allows_multiple_answers")].isNull() && m_allows_multiple_answers_isValid;

    m_correct_option_id_isValid = ::tele_rest::fromJsonValue(m_correct_option_id, json[QString("correct_option_id")]);
    m_correct_option_id_isSet = !json[QString("correct_option_id")].isNull() && m_correct_option_id_isValid;

    m_explanation_isValid = ::tele_rest::fromJsonValue(m_explanation, json[QString("explanation")]);
    m_explanation_isSet = !json[QString("explanation")].isNull() && m_explanation_isValid;

    m_explanation_parse_mode_isValid = ::tele_rest::fromJsonValue(m_explanation_parse_mode, json[QString("explanation_parse_mode")]);
    m_explanation_parse_mode_isSet = !json[QString("explanation_parse_mode")].isNull() && m_explanation_parse_mode_isValid;

    m_explanation_entities_isValid = ::tele_rest::fromJsonValue(m_explanation_entities, json[QString("explanation_entities")]);
    m_explanation_entities_isSet = !json[QString("explanation_entities")].isNull() && m_explanation_entities_isValid;

    m_open_period_isValid = ::tele_rest::fromJsonValue(m_open_period, json[QString("open_period")]);
    m_open_period_isSet = !json[QString("open_period")].isNull() && m_open_period_isValid;

    m_close_date_isValid = ::tele_rest::fromJsonValue(m_close_date, json[QString("close_date")]);
    m_close_date_isSet = !json[QString("close_date")].isNull() && m_close_date_isValid;

    m_is_closed_isValid = ::tele_rest::fromJsonValue(m_is_closed, json[QString("is_closed")]);
    m_is_closed_isSet = !json[QString("is_closed")].isNull() && m_is_closed_isValid;

    m_disable_notification_isValid = ::tele_rest::fromJsonValue(m_disable_notification, json[QString("disable_notification")]);
    m_disable_notification_isSet = !json[QString("disable_notification")].isNull() && m_disable_notification_isValid;

    m_protect_content_isValid = ::tele_rest::fromJsonValue(m_protect_content, json[QString("protect_content")]);
    m_protect_content_isSet = !json[QString("protect_content")].isNull() && m_protect_content_isValid;

    m_allow_paid_broadcast_isValid = ::tele_rest::fromJsonValue(m_allow_paid_broadcast, json[QString("allow_paid_broadcast")]);
    m_allow_paid_broadcast_isSet = !json[QString("allow_paid_broadcast")].isNull() && m_allow_paid_broadcast_isValid;

    m_message_effect_id_isValid = ::tele_rest::fromJsonValue(m_message_effect_id, json[QString("message_effect_id")]);
    m_message_effect_id_isSet = !json[QString("message_effect_id")].isNull() && m_message_effect_id_isValid;

    m_reply_parameters_isValid = ::tele_rest::fromJsonValue(m_reply_parameters, json[QString("reply_parameters")]);
    m_reply_parameters_isSet = !json[QString("reply_parameters")].isNull() && m_reply_parameters_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAISendPollRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendPollRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_chat_id.isSet()) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_question_isSet) {
        obj.insert(QString("question"), ::tele_rest::toJsonValue(m_question));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::tele_rest::toJsonValue(m_options));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_question_parse_mode_isSet) {
        obj.insert(QString("question_parse_mode"), ::tele_rest::toJsonValue(m_question_parse_mode));
    }
    if (m_question_entities.size() > 0) {
        obj.insert(QString("question_entities"), ::tele_rest::toJsonValue(m_question_entities));
    }
    if (m_is_anonymous_isSet) {
        obj.insert(QString("is_anonymous"), ::tele_rest::toJsonValue(m_is_anonymous));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_allows_multiple_answers_isSet) {
        obj.insert(QString("allows_multiple_answers"), ::tele_rest::toJsonValue(m_allows_multiple_answers));
    }
    if (m_correct_option_id_isSet) {
        obj.insert(QString("correct_option_id"), ::tele_rest::toJsonValue(m_correct_option_id));
    }
    if (m_explanation_isSet) {
        obj.insert(QString("explanation"), ::tele_rest::toJsonValue(m_explanation));
    }
    if (m_explanation_parse_mode_isSet) {
        obj.insert(QString("explanation_parse_mode"), ::tele_rest::toJsonValue(m_explanation_parse_mode));
    }
    if (m_explanation_entities.size() > 0) {
        obj.insert(QString("explanation_entities"), ::tele_rest::toJsonValue(m_explanation_entities));
    }
    if (m_open_period_isSet) {
        obj.insert(QString("open_period"), ::tele_rest::toJsonValue(m_open_period));
    }
    if (m_close_date_isSet) {
        obj.insert(QString("close_date"), ::tele_rest::toJsonValue(m_close_date));
    }
    if (m_is_closed_isSet) {
        obj.insert(QString("is_closed"), ::tele_rest::toJsonValue(m_is_closed));
    }
    if (m_disable_notification_isSet) {
        obj.insert(QString("disable_notification"), ::tele_rest::toJsonValue(m_disable_notification));
    }
    if (m_protect_content_isSet) {
        obj.insert(QString("protect_content"), ::tele_rest::toJsonValue(m_protect_content));
    }
    if (m_allow_paid_broadcast_isSet) {
        obj.insert(QString("allow_paid_broadcast"), ::tele_rest::toJsonValue(m_allow_paid_broadcast));
    }
    if (m_message_effect_id_isSet) {
        obj.insert(QString("message_effect_id"), ::tele_rest::toJsonValue(m_message_effect_id));
    }
    if (m_reply_parameters.isSet()) {
        obj.insert(QString("reply_parameters"), ::tele_rest::toJsonValue(m_reply_parameters));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

OAISendMessageRequest_chat_id OAISendPollRequest::getChatId() const {
    return m_chat_id;
}
void OAISendPollRequest::setChatId(const OAISendMessageRequest_chat_id &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISendPollRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISendPollRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

QString OAISendPollRequest::getQuestion() const {
    return m_question;
}
void OAISendPollRequest::setQuestion(const QString &question) {
    m_question = question;
    m_question_isSet = true;
}

bool OAISendPollRequest::is_question_Set() const{
    return m_question_isSet;
}

bool OAISendPollRequest::is_question_Valid() const{
    return m_question_isValid;
}

QList<OAIInputPollOption> OAISendPollRequest::getOptions() const {
    return m_options;
}
void OAISendPollRequest::setOptions(const QList<OAIInputPollOption> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAISendPollRequest::is_options_Set() const{
    return m_options_isSet;
}

bool OAISendPollRequest::is_options_Valid() const{
    return m_options_isValid;
}

QString OAISendPollRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAISendPollRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAISendPollRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAISendPollRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

qint32 OAISendPollRequest::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAISendPollRequest::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAISendPollRequest::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAISendPollRequest::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

QString OAISendPollRequest::getQuestionParseMode() const {
    return m_question_parse_mode;
}
void OAISendPollRequest::setQuestionParseMode(const QString &question_parse_mode) {
    m_question_parse_mode = question_parse_mode;
    m_question_parse_mode_isSet = true;
}

bool OAISendPollRequest::is_question_parse_mode_Set() const{
    return m_question_parse_mode_isSet;
}

bool OAISendPollRequest::is_question_parse_mode_Valid() const{
    return m_question_parse_mode_isValid;
}

QList<OAIMessageEntity> OAISendPollRequest::getQuestionEntities() const {
    return m_question_entities;
}
void OAISendPollRequest::setQuestionEntities(const QList<OAIMessageEntity> &question_entities) {
    m_question_entities = question_entities;
    m_question_entities_isSet = true;
}

bool OAISendPollRequest::is_question_entities_Set() const{
    return m_question_entities_isSet;
}

bool OAISendPollRequest::is_question_entities_Valid() const{
    return m_question_entities_isValid;
}

bool OAISendPollRequest::isIsAnonymous() const {
    return m_is_anonymous;
}
void OAISendPollRequest::setIsAnonymous(const bool &is_anonymous) {
    m_is_anonymous = is_anonymous;
    m_is_anonymous_isSet = true;
}

bool OAISendPollRequest::is_is_anonymous_Set() const{
    return m_is_anonymous_isSet;
}

bool OAISendPollRequest::is_is_anonymous_Valid() const{
    return m_is_anonymous_isValid;
}

QString OAISendPollRequest::getType() const {
    return m_type;
}
void OAISendPollRequest::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAISendPollRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAISendPollRequest::is_type_Valid() const{
    return m_type_isValid;
}

bool OAISendPollRequest::isAllowsMultipleAnswers() const {
    return m_allows_multiple_answers;
}
void OAISendPollRequest::setAllowsMultipleAnswers(const bool &allows_multiple_answers) {
    m_allows_multiple_answers = allows_multiple_answers;
    m_allows_multiple_answers_isSet = true;
}

bool OAISendPollRequest::is_allows_multiple_answers_Set() const{
    return m_allows_multiple_answers_isSet;
}

bool OAISendPollRequest::is_allows_multiple_answers_Valid() const{
    return m_allows_multiple_answers_isValid;
}

qint32 OAISendPollRequest::getCorrectOptionId() const {
    return m_correct_option_id;
}
void OAISendPollRequest::setCorrectOptionId(const qint32 &correct_option_id) {
    m_correct_option_id = correct_option_id;
    m_correct_option_id_isSet = true;
}

bool OAISendPollRequest::is_correct_option_id_Set() const{
    return m_correct_option_id_isSet;
}

bool OAISendPollRequest::is_correct_option_id_Valid() const{
    return m_correct_option_id_isValid;
}

QString OAISendPollRequest::getExplanation() const {
    return m_explanation;
}
void OAISendPollRequest::setExplanation(const QString &explanation) {
    m_explanation = explanation;
    m_explanation_isSet = true;
}

bool OAISendPollRequest::is_explanation_Set() const{
    return m_explanation_isSet;
}

bool OAISendPollRequest::is_explanation_Valid() const{
    return m_explanation_isValid;
}

QString OAISendPollRequest::getExplanationParseMode() const {
    return m_explanation_parse_mode;
}
void OAISendPollRequest::setExplanationParseMode(const QString &explanation_parse_mode) {
    m_explanation_parse_mode = explanation_parse_mode;
    m_explanation_parse_mode_isSet = true;
}

bool OAISendPollRequest::is_explanation_parse_mode_Set() const{
    return m_explanation_parse_mode_isSet;
}

bool OAISendPollRequest::is_explanation_parse_mode_Valid() const{
    return m_explanation_parse_mode_isValid;
}

QList<OAIMessageEntity> OAISendPollRequest::getExplanationEntities() const {
    return m_explanation_entities;
}
void OAISendPollRequest::setExplanationEntities(const QList<OAIMessageEntity> &explanation_entities) {
    m_explanation_entities = explanation_entities;
    m_explanation_entities_isSet = true;
}

bool OAISendPollRequest::is_explanation_entities_Set() const{
    return m_explanation_entities_isSet;
}

bool OAISendPollRequest::is_explanation_entities_Valid() const{
    return m_explanation_entities_isValid;
}

qint32 OAISendPollRequest::getOpenPeriod() const {
    return m_open_period;
}
void OAISendPollRequest::setOpenPeriod(const qint32 &open_period) {
    m_open_period = open_period;
    m_open_period_isSet = true;
}

bool OAISendPollRequest::is_open_period_Set() const{
    return m_open_period_isSet;
}

bool OAISendPollRequest::is_open_period_Valid() const{
    return m_open_period_isValid;
}

qint32 OAISendPollRequest::getCloseDate() const {
    return m_close_date;
}
void OAISendPollRequest::setCloseDate(const qint32 &close_date) {
    m_close_date = close_date;
    m_close_date_isSet = true;
}

bool OAISendPollRequest::is_close_date_Set() const{
    return m_close_date_isSet;
}

bool OAISendPollRequest::is_close_date_Valid() const{
    return m_close_date_isValid;
}

bool OAISendPollRequest::isIsClosed() const {
    return m_is_closed;
}
void OAISendPollRequest::setIsClosed(const bool &is_closed) {
    m_is_closed = is_closed;
    m_is_closed_isSet = true;
}

bool OAISendPollRequest::is_is_closed_Set() const{
    return m_is_closed_isSet;
}

bool OAISendPollRequest::is_is_closed_Valid() const{
    return m_is_closed_isValid;
}

bool OAISendPollRequest::isDisableNotification() const {
    return m_disable_notification;
}
void OAISendPollRequest::setDisableNotification(const bool &disable_notification) {
    m_disable_notification = disable_notification;
    m_disable_notification_isSet = true;
}

bool OAISendPollRequest::is_disable_notification_Set() const{
    return m_disable_notification_isSet;
}

bool OAISendPollRequest::is_disable_notification_Valid() const{
    return m_disable_notification_isValid;
}

bool OAISendPollRequest::isProtectContent() const {
    return m_protect_content;
}
void OAISendPollRequest::setProtectContent(const bool &protect_content) {
    m_protect_content = protect_content;
    m_protect_content_isSet = true;
}

bool OAISendPollRequest::is_protect_content_Set() const{
    return m_protect_content_isSet;
}

bool OAISendPollRequest::is_protect_content_Valid() const{
    return m_protect_content_isValid;
}

bool OAISendPollRequest::isAllowPaidBroadcast() const {
    return m_allow_paid_broadcast;
}
void OAISendPollRequest::setAllowPaidBroadcast(const bool &allow_paid_broadcast) {
    m_allow_paid_broadcast = allow_paid_broadcast;
    m_allow_paid_broadcast_isSet = true;
}

bool OAISendPollRequest::is_allow_paid_broadcast_Set() const{
    return m_allow_paid_broadcast_isSet;
}

bool OAISendPollRequest::is_allow_paid_broadcast_Valid() const{
    return m_allow_paid_broadcast_isValid;
}

QString OAISendPollRequest::getMessageEffectId() const {
    return m_message_effect_id;
}
void OAISendPollRequest::setMessageEffectId(const QString &message_effect_id) {
    m_message_effect_id = message_effect_id;
    m_message_effect_id_isSet = true;
}

bool OAISendPollRequest::is_message_effect_id_Set() const{
    return m_message_effect_id_isSet;
}

bool OAISendPollRequest::is_message_effect_id_Valid() const{
    return m_message_effect_id_isValid;
}

OAIReplyParameters OAISendPollRequest::getReplyParameters() const {
    return m_reply_parameters;
}
void OAISendPollRequest::setReplyParameters(const OAIReplyParameters &reply_parameters) {
    m_reply_parameters = reply_parameters;
    m_reply_parameters_isSet = true;
}

bool OAISendPollRequest::is_reply_parameters_Set() const{
    return m_reply_parameters_isSet;
}

bool OAISendPollRequest::is_reply_parameters_Valid() const{
    return m_reply_parameters_isValid;
}

OAISendMessageRequest_reply_markup OAISendPollRequest::getReplyMarkup() const {
    return m_reply_markup;
}
void OAISendPollRequest::setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAISendPollRequest::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAISendPollRequest::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAISendPollRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat_id.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_question_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_question_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_question_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_anonymous_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allows_multiple_answers_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_correct_option_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explanation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explanation_parse_mode_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_explanation_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_open_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_close_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_closed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_notification_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_protect_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_allow_paid_broadcast_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_effect_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_parameters.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISendPollRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_id_isValid && m_question_isValid && m_options_isValid && true;
}

} // namespace tele_rest
